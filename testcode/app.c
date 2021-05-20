#include "app.h"
#include "page_1.h"
#include "stdlib.h"

static lv_obj_t *page1;

void Event1(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_CLICKED){
		auto b = lv_switch_get_state(switch_1_ev_0);
		if (b)
			lv_switch_off(switch_1_ev_0,LV_ANIM_ON);
		else
			lv_switch_on(switch_1_ev_0,LV_ANIM_ON);
	}
}


void button_1_ev_0_event(lv_obj_t *obj, lv_event_t event){
	Event1(obj, event);
}

void Event3(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_VALUE_CHANGED){
		int value = lv_slider_get_value(slider_1_ev_0);
		lv_bar_set_value(bar_1_ev_0,value,LV_ANIM_OFF);
	}
}

void Event4(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_VALUE_CHANGED){
		int value = lv_slider_get_value(slider_1_ev_0);
		lv_slider_set_value(slider_2_ev_0,value,LV_ANIM_OFF);
	}
}

void Event5(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_VALUE_CHANGED){
		int value = lv_slider_get_value(slider_1_ev_0);
		if (value > 360) value %= 360;
		lv_arc_set_end_angle(arc_1_ev_0,value);
	}
}


void slider_1_ev_0_event(lv_obj_t *obj, lv_event_t event){
	Event3(obj, event);
	Event4(obj, event);
	Event5(obj, event);
}

void Event2(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_CLICKED){
		auto b = lv_switch_get_state(switch_2_ev_0);
		if (b)
			lv_switch_off(switch_2_ev_0,LV_ANIM_OFF);
		else 
			lv_switch_on(switch_2_ev_0,LV_ANIM_OFF);
	}
}


void button_2_ev_0_event(lv_obj_t *obj, lv_event_t event){
	Event2(obj, event);
}

void Event6(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_CLICKED){
		lv_arc_set_end_angle(arc_1_ev_0,180);
	}
}

void Event7(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_CLICKED){
		lv_bar_set_value(bar_1_ev_0,50,LV_ANIM_ON);
	}
}

void Event8(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_CLICKED){
		lv_slider_set_value(slider_2_ev_0,50,LV_ANIM_ON);
	}
}


void button_5_ev_0_event(lv_obj_t *obj, lv_event_t event){
	Event6(obj, event);
	Event7(obj, event);
	Event8(obj, event);
}

void Event9(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_VALUE_CHANGED){
		char arr[10] = {0};
		lv_roller_get_selected_str(roller_1_ev_0, arr, 10);
		int value = atoi(arr);
		if (value > 360) value %= 360;
		lv_arc_set_end_angle(arc_1_ev_0,value);
	}
}

void Event10(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_VALUE_CHANGED){
		char arr[10] = {0};
		lv_roller_get_selected_str(roller_1_ev_0, arr, 10);
		int value = atoi(arr);
		lv_bar_set_value(bar_1_ev_0,value,LV_ANIM_ON);
	}
}

void Event11(lv_obj_t *obj, lv_event_t event){
	if (event == LV_EVENT_VALUE_CHANGED){
		char arr[10] = {0};
		lv_roller_get_selected_str(roller_1_ev_0, arr, 10);
		int value = atoi(arr);
		lv_slider_set_value(slider_2_ev_0,value,LV_ANIM_ON);
	}
}


void roller_1_ev_0_event(lv_obj_t *obj, lv_event_t event){
	Event9(obj, event);
	Event10(obj, event);
	Event11(obj, event);
}


void app(){
	page1 = page_1_create();

	lv_scr_load(page1);
}