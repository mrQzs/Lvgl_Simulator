#include "page_1.h"
#include "app.h"

/**********************
 *       WIDGETS
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/


lv_obj_t* button_1_ev_0;
lv_obj_t* bar_1_ev_0;
lv_obj_t* arc_1_ev_0;
lv_obj_t* slider_1_ev_0;
lv_obj_t* switch_1_ev_0;
lv_obj_t* button_2_ev_0;
lv_obj_t* switch_2_ev_0;
lv_obj_t* button_5_ev_0;
lv_obj_t* roller_1_ev_0;
lv_obj_t* slider_2_ev_0;

lv_obj_t* page_1_create(){
	lv_obj_t *parent = lv_obj_create(NULL, NULL);

	static lv_style_t button_1_s0;
	lv_style_init(&button_1_s0);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_DEFAULT,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DEFAULT,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_CHECKED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_CHECKED,&lv_font_chinese_16);
	lv_style_set_outline_color(&button_1_s0,LV_STATE_FOCUSED,lv_color_hex(0x44d1b6));
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_FOCUSED,0);
	lv_style_set_value_font(&button_1_s0,LV_STATE_FOCUSED,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_EDITED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_EDITED,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_HOVERED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_HOVERED,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_PRESSED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_PRESSED,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_1_s0,LV_STATE_DISABLED,127);
	lv_style_set_value_font(&button_1_s0,LV_STATE_DISABLED,&lv_font_chinese_16);
	lv_obj_t *button_1 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_1, 0, &button_1_s0);
	lv_obj_set_pos(button_1, 0, 0);
	lv_obj_set_size(button_1, 100, 35);
	lv_btn_set_checkable(button_1, false);
	lv_btn_set_fit(button_1, LV_FIT_NONE);
	lv_obj_set_click(button_1, true);
	lv_obj_set_event_cb(button_1,button_1_ev_0_event);

	button_1_ev_0 = button_1;


	static lv_style_t bar_1_s0;
	lv_style_init(&bar_1_s0);
	lv_style_set_bg_color(&bar_1_s0,LV_STATE_DEFAULT,lv_color_hex(0xe8e8e8));
	lv_style_set_bg_color(&bar_1_s0,LV_STATE_CHECKED,lv_color_hex(0xe8e8e8));
	lv_style_set_bg_color(&bar_1_s0,LV_STATE_FOCUSED,lv_color_hex(0xe8e8e8));
	lv_style_set_bg_color(&bar_1_s0,LV_STATE_EDITED,lv_color_hex(0xe8e8e8));
	lv_style_set_bg_color(&bar_1_s0,LV_STATE_HOVERED,lv_color_hex(0xe8e8e8));
	lv_style_set_bg_color(&bar_1_s0,LV_STATE_PRESSED,lv_color_hex(0xe8e8e8));
	lv_style_set_bg_color(&bar_1_s0,LV_STATE_DISABLED,lv_color_hex(0xe8e8e8));
	static lv_style_t bar_1_s1;
	lv_style_init(&bar_1_s1);
	lv_obj_t *bar_1 = lv_bar_create(parent, NULL);
	lv_obj_add_style(bar_1, 0, &bar_1_s0);
	lv_obj_add_style(bar_1, 1, &bar_1_s1);
	lv_obj_set_pos(bar_1, 21, 359);
	lv_obj_set_size(bar_1, 200, 30);
	lv_bar_set_range(bar_1, 0, 100);
	lv_bar_set_anim_time(bar_1,200);

	bar_1_ev_0 = bar_1;


	static lv_style_t arc_1_s0;
	lv_style_init(&arc_1_s0);
	lv_style_set_pad_top(&arc_1_s0,LV_STATE_DEFAULT,0);
	lv_style_set_pad_bottom(&arc_1_s0,LV_STATE_DEFAULT,0);
	lv_style_set_pad_left(&arc_1_s0,LV_STATE_DEFAULT,0);
	lv_style_set_pad_right(&arc_1_s0,LV_STATE_DEFAULT,0);
	lv_style_set_pad_inner(&arc_1_s0,LV_STATE_DEFAULT,0);
	lv_style_set_pad_top(&arc_1_s0,LV_STATE_CHECKED,0);
	lv_style_set_pad_bottom(&arc_1_s0,LV_STATE_CHECKED,0);
	lv_style_set_pad_left(&arc_1_s0,LV_STATE_CHECKED,0);
	lv_style_set_pad_right(&arc_1_s0,LV_STATE_CHECKED,0);
	lv_style_set_pad_inner(&arc_1_s0,LV_STATE_CHECKED,0);
	lv_style_set_pad_top(&arc_1_s0,LV_STATE_FOCUSED,0);
	lv_style_set_pad_bottom(&arc_1_s0,LV_STATE_FOCUSED,0);
	lv_style_set_pad_left(&arc_1_s0,LV_STATE_FOCUSED,0);
	lv_style_set_pad_right(&arc_1_s0,LV_STATE_FOCUSED,0);
	lv_style_set_pad_inner(&arc_1_s0,LV_STATE_FOCUSED,0);
	lv_style_set_pad_top(&arc_1_s0,LV_STATE_EDITED,0);
	lv_style_set_pad_bottom(&arc_1_s0,LV_STATE_EDITED,0);
	lv_style_set_pad_left(&arc_1_s0,LV_STATE_EDITED,0);
	lv_style_set_pad_right(&arc_1_s0,LV_STATE_EDITED,0);
	lv_style_set_pad_inner(&arc_1_s0,LV_STATE_EDITED,0);
	lv_style_set_pad_top(&arc_1_s0,LV_STATE_HOVERED,0);
	lv_style_set_pad_bottom(&arc_1_s0,LV_STATE_HOVERED,0);
	lv_style_set_pad_left(&arc_1_s0,LV_STATE_HOVERED,0);
	lv_style_set_pad_right(&arc_1_s0,LV_STATE_HOVERED,0);
	lv_style_set_pad_inner(&arc_1_s0,LV_STATE_HOVERED,0);
	lv_style_set_pad_top(&arc_1_s0,LV_STATE_PRESSED,0);
	lv_style_set_pad_bottom(&arc_1_s0,LV_STATE_PRESSED,0);
	lv_style_set_pad_left(&arc_1_s0,LV_STATE_PRESSED,0);
	lv_style_set_pad_right(&arc_1_s0,LV_STATE_PRESSED,0);
	lv_style_set_pad_inner(&arc_1_s0,LV_STATE_PRESSED,0);
	lv_style_set_pad_top(&arc_1_s0,LV_STATE_DISABLED,0);
	lv_style_set_pad_bottom(&arc_1_s0,LV_STATE_DISABLED,0);
	lv_style_set_pad_left(&arc_1_s0,LV_STATE_DISABLED,0);
	lv_style_set_pad_right(&arc_1_s0,LV_STATE_DISABLED,0);
	lv_style_set_pad_inner(&arc_1_s0,LV_STATE_DISABLED,0);
	static lv_style_t arc_1_s1;
	lv_style_init(&arc_1_s1);
	lv_obj_t *arc_1 = lv_arc_create(parent, NULL);
	lv_obj_add_style(arc_1, 0, &arc_1_s0);
	lv_obj_add_style(arc_1, 1, &arc_1_s1);
	lv_obj_set_pos(arc_1, 149, 413);
	lv_obj_set_size(arc_1, 150, 150);
	lv_arc_set_bg_angles(arc_1,0,360);
	lv_arc_set_angles(arc_1,0,0);
	lv_arc_set_rotation(arc_1,270);

	arc_1_ev_0 = arc_1;


	static lv_style_t slider_1_s0;
	lv_style_init(&slider_1_s0);
	static lv_style_t slider_1_s1;
	lv_style_init(&slider_1_s1);
	static lv_style_t slider_1_s2;
	lv_style_init(&slider_1_s2);
	lv_obj_t *slider_1 = lv_slider_create(parent, NULL);
	lv_obj_add_style(slider_1, 0, &slider_1_s0);
	lv_obj_add_style(slider_1, 1, &slider_1_s1);
	lv_obj_add_style(slider_1, 2, &slider_1_s2);
	lv_obj_set_pos(slider_1, 155, 146);
	lv_obj_set_size(slider_1, 150, 25);
	lv_slider_set_range(slider_1, 0, 720);
	lv_slider_set_value(slider_1, 0, LV_ANIM_OFF);
	lv_obj_set_click(slider_1, true);
	lv_obj_set_event_cb(slider_1,slider_1_ev_0_event);

	slider_1_ev_0 = slider_1;


	static lv_style_t switch_1_s0;
	lv_style_init(&switch_1_s0);
	static lv_style_t switch_1_s1;
	lv_style_init(&switch_1_s1);
	static lv_style_t switch_1_s2;
	lv_style_init(&switch_1_s2);
	lv_obj_t *switch_1 = lv_switch_create(parent, NULL);
	lv_obj_add_style(switch_1, 0, &switch_1_s0);
	lv_obj_add_style(switch_1, 1, &switch_1_s1);
	lv_obj_add_style(switch_1, 2, &switch_1_s2);
	lv_obj_set_pos(switch_1, 409, 0);
	lv_obj_set_size(switch_1, 70, 35);

	switch_1_ev_0 = switch_1;


	static lv_style_t button_2_s0;
	lv_style_init(&button_2_s0);
	lv_style_set_outline_opa(&button_2_s0,LV_STATE_DEFAULT,127);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DEFAULT,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_2_s0,LV_STATE_CHECKED,127);
	lv_style_set_value_font(&button_2_s0,LV_STATE_CHECKED,&lv_font_chinese_16);
	lv_style_set_outline_color(&button_2_s0,LV_STATE_FOCUSED,lv_color_hex(0x44d1b6));
	lv_style_set_outline_opa(&button_2_s0,LV_STATE_FOCUSED,0);
	lv_style_set_value_font(&button_2_s0,LV_STATE_FOCUSED,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_2_s0,LV_STATE_EDITED,127);
	lv_style_set_value_font(&button_2_s0,LV_STATE_EDITED,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_2_s0,LV_STATE_HOVERED,127);
	lv_style_set_value_font(&button_2_s0,LV_STATE_HOVERED,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_2_s0,LV_STATE_PRESSED,127);
	lv_style_set_value_font(&button_2_s0,LV_STATE_PRESSED,&lv_font_chinese_16);
	lv_style_set_outline_opa(&button_2_s0,LV_STATE_DISABLED,127);
	lv_style_set_value_font(&button_2_s0,LV_STATE_DISABLED,&lv_font_chinese_16);
	lv_obj_t *button_2 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_2, 0, &button_2_s0);
	lv_obj_set_pos(button_2, 0, 34);
	lv_obj_set_size(button_2, 100, 35);
	lv_btn_set_checkable(button_2, false);
	lv_btn_set_fit(button_2, LV_FIT_NONE);
	lv_obj_set_click(button_2, true);
	lv_obj_set_event_cb(button_2,button_2_ev_0_event);

	button_2_ev_0 = button_2;


	static lv_style_t switch_2_s0;
	lv_style_init(&switch_2_s0);
	static lv_style_t switch_2_s1;
	lv_style_init(&switch_2_s1);
	static lv_style_t switch_2_s2;
	lv_style_init(&switch_2_s2);
	lv_obj_t *switch_2 = lv_switch_create(parent, NULL);
	lv_obj_add_style(switch_2, 0, &switch_2_s0);
	lv_obj_add_style(switch_2, 1, &switch_2_s1);
	lv_obj_add_style(switch_2, 2, &switch_2_s2);
	lv_obj_set_pos(switch_2, 409, 35);
	lv_obj_set_size(switch_2, 70, 35);

	switch_2_ev_0 = switch_2;


	static lv_style_t button_5_s0;
	lv_style_init(&button_5_s0);
	lv_style_set_value_font(&button_5_s0,LV_STATE_DEFAULT,&lv_font_chinese_16);
	lv_style_set_value_font(&button_5_s0,LV_STATE_CHECKED,&lv_font_chinese_16);
	lv_style_set_value_font(&button_5_s0,LV_STATE_FOCUSED,&lv_font_chinese_16);
	lv_style_set_value_font(&button_5_s0,LV_STATE_EDITED,&lv_font_chinese_16);
	lv_style_set_value_font(&button_5_s0,LV_STATE_HOVERED,&lv_font_chinese_16);
	lv_style_set_value_font(&button_5_s0,LV_STATE_PRESSED,&lv_font_chinese_16);
	lv_style_set_value_font(&button_5_s0,LV_STATE_DISABLED,&lv_font_chinese_16);
	lv_obj_t *button_5 = lv_btn_create(parent, NULL);
	lv_obj_add_style(button_5, 0, &button_5_s0);
	lv_obj_set_pos(button_5, 184, 192);
	lv_obj_set_size(button_5, 100, 35);
	lv_btn_set_checkable(button_5, false);
	lv_btn_set_fit(button_5, LV_FIT_NONE);
	lv_obj_set_click(button_5, true);
	lv_obj_set_event_cb(button_5,button_5_ev_0_event);

	button_5_ev_0 = button_5;


	static lv_style_t roller_1_s0;
	lv_style_init(&roller_1_s0);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_DEFAULT,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_CHECKED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_FOCUSED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_EDITED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_HOVERED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_PRESSED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s0,LV_STATE_DISABLED,&lv_font_chinese_16);
	static lv_style_t roller_1_s1;
	lv_style_init(&roller_1_s1);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_DEFAULT,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_CHECKED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_FOCUSED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_EDITED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_HOVERED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_PRESSED,&lv_font_chinese_16);
	lv_style_set_text_font(&roller_1_s1,LV_STATE_DISABLED,&lv_font_chinese_16);
	lv_obj_t *roller_1 = lv_roller_create(parent, NULL);
	lv_obj_add_style(roller_1, 0, &roller_1_s0);
	lv_obj_add_style(roller_1, 3, &roller_1_s1);
	lv_obj_set_pos(roller_1, 204, 234);
	lv_obj_set_size(roller_1, 55, 117);
	lv_roller_set_options(roller_1, "30\n60\n90\n120\n150\n180\n210\n240\n270\n300\n330\n360", LV_ROLLER_MODE_NORMAL);
	lv_roller_set_align(roller_1, LV_LABEL_ALIGN_CENTER);
	lv_roller_set_visible_row_count(roller_1,3);
	lv_roller_set_anim_time(roller_1,200);
	lv_roller_set_auto_fit(roller_1, true);
	lv_obj_set_click(roller_1, true);
	lv_obj_set_event_cb(roller_1,roller_1_ev_0_event);

	roller_1_ev_0 = roller_1;


	static lv_style_t slider_2_s0;
	lv_style_init(&slider_2_s0);
	static lv_style_t slider_2_s1;
	lv_style_init(&slider_2_s1);
	static lv_style_t slider_2_s2;
	lv_style_init(&slider_2_s2);
	lv_obj_t *slider_2 = lv_slider_create(parent, NULL);
	lv_obj_add_style(slider_2, 0, &slider_2_s0);
	lv_obj_add_style(slider_2, 1, &slider_2_s1);
	lv_obj_add_style(slider_2, 2, &slider_2_s2);
	lv_obj_set_pos(slider_2, 296, 361);
	lv_obj_set_size(slider_2, 150, 26);
	lv_slider_set_range(slider_2, 0, 100);
	lv_slider_set_value(slider_2, 38, LV_ANIM_OFF);

	slider_2_ev_0 = slider_2;


	return parent;
}
