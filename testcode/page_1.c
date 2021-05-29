#include "page_1.h"
#include "app.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/


lv_obj_t* label_1_ev_0;
lv_obj_t* button_1_ev_0;
lv_obj_t* label_2_ev_0;

lv_obj_t* page_1_create(){
	lv_obj_t *parent = lv_obj_create(NULL, NULL);

	static lv_style_t label_1_s0;
	lv_style_init(&label_1_s0);
	lv_style_set_text_font(&label_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_1 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_1, 0, &label_1_s0);
	lv_obj_set_hidden(label_1, false);
	lv_obj_set_click(label_1, false);
	lv_obj_set_drag(label_1, false);
	lv_label_set_text(label_1,"Text");
	lv_obj_set_pos(label_1, 302, 147);
	lv_obj_set_size(label_1, 31, 19);

	label_1_ev_0 = label_1;


	static lv_style_t button_1_s0;
	lv_style_init(&button_1_s0);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_DEFAULT,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DEFAULT,&lv_font_123abc_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_CHECKED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_outline_color(&button_1_s0,LV_STATE_FOCUSED,lv_color_hex(0x44d1b6));
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_FOCUSED,0);
	lv_style_set_value_font(&button_1_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_EDITED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_HOVERED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_PRESSED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_DISABLED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *button_1 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_1, 0, &button_1_s0);
	lv_obj_set_hidden(button_1, false);
	lv_obj_set_click(button_1, true);
	lv_obj_set_drag(button_1, false);
	lv_obj_set_pos(button_1, 0, 0);
	lv_obj_set_size(button_1, 100, 35);
	lv_btn_set_checkable(button_1, false);
	lv_btn_set_fit(button_1, LV_FIT_NONE);
	lv_obj_set_click(button_1, true);
	lv_obj_set_event_cb(button_1,button_1_ev_0_event);

	button_1_ev_0 = button_1;


	static lv_style_t label_2_s0;
	lv_style_init(&label_2_s0);
	lv_style_set_text_font(&label_2_s0,LV_STATE_DEFAULT,&lv_font_chinese_30);
	lv_style_set_text_font(&label_2_s0,LV_STATE_CHECKED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_FOCUSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_EDITED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_HOVERED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_PRESSED,&lv_font_123abc_16);
	lv_style_set_text_font(&label_2_s0,LV_STATE_DISABLED,&lv_font_123abc_16);
	lv_obj_t *label_2 = lv_label_create(parent, NULL);
	lv_obj_add_style(label_2, 0, &label_2_s0);
	lv_obj_set_hidden(label_2, false);
	lv_obj_set_click(label_2, false);
	lv_obj_set_drag(label_2, false);
	lv_label_set_text(label_2,"Text");
	lv_obj_set_pos(label_2, 301, 332);
	lv_obj_set_size(label_2, 57, 36);

	label_2_ev_0 = label_2;


	return parent;
}
