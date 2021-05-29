#ifndef APP_H
#define APP_H

#include "lvgl/lvgl.h"

LV_FONT_DECLARE(lv_font_123abc_16);
LV_FONT_DECLARE(lv_font_chinese_30);

void button_1_ev_0_event(lv_obj_t *obj, lv_event_t event);
void Event1(lv_obj_t *obj, lv_event_t event);
void Event2(lv_obj_t *obj, lv_event_t event);

void app();

#endif