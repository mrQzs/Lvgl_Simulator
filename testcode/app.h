#ifndef APP_H
#define APP_H

#include "lvgl/lvgl.h"

LV_FONT_DECLARE(lv_font_chinese_16);

void button_1_ev_0_event(lv_obj_t *obj, lv_event_t event);
void Event1(lv_obj_t *obj, lv_event_t event);
void slider_1_ev_0_event(lv_obj_t *obj, lv_event_t event);
void Event3(lv_obj_t *obj, lv_event_t event);
void Event4(lv_obj_t *obj, lv_event_t event);
void Event5(lv_obj_t *obj, lv_event_t event);
void button_2_ev_0_event(lv_obj_t *obj, lv_event_t event);
void Event2(lv_obj_t *obj, lv_event_t event);
void button_5_ev_0_event(lv_obj_t *obj, lv_event_t event);
void Event6(lv_obj_t *obj, lv_event_t event);
void Event7(lv_obj_t *obj, lv_event_t event);
void Event8(lv_obj_t *obj, lv_event_t event);
void roller_1_ev_0_event(lv_obj_t *obj, lv_event_t event);
void Event9(lv_obj_t *obj, lv_event_t event);
void Event10(lv_obj_t *obj, lv_event_t event);
void Event11(lv_obj_t *obj, lv_event_t event);

void app();

#endif