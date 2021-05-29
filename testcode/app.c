#include "app.h"

#include <stdlib.h>

#include "timefuncs.h"

#include "page_1.h"

static lv_obj_t *page1;

void Event1(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_CLICKED){
		lv_label_set_text(label_1_ev_0, "haha");
	}
}

static char Event2_timepare[] = "yyyy-MM-dd hh:mm:ss";
void Event2_settime(void *var, lv_anim_value_t value) {	lv_obj_t *obj = (lv_obj_t *)var;
	char timestr[80] = {0};
	dateTimeToString(Event2_timepare, sizeof(Event2_timepare), timestr);
	lv_label_set_text(obj, timestr);
}
void Event2(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_CLICKED){
		lv_anim_t animtime;
		lv_anim_init(&animtime);
		lv_anim_set_var(&animtime, label_2_ev_0);
		lv_anim_set_values(&animtime, 0, 59);
		lv_anim_set_repeat_count(&animtime, LV_ANIM_REPEAT_INFINITE);
		lv_anim_set_exec_cb(&animtime, (lv_anim_exec_xcb_t)Event2_settime);
		lv_anim_start(&animtime);
	}
}


void button_1_ev_0_event(lv_obj_t *obj, lv_event_t event){
	Event1(obj, event);
	Event2(obj, event);
}


void app(){
	page1 = page_1_create();

	lv_scr_load(page1);
}