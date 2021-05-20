#ifndef PAGE_1_H
#define PAGE_1_H

#ifdef __cplusplus
extern "C" {
#endif

/**********************
 *      INCLUDES
 **********************/

#include "lvgl/lvgl.h"

/**********************
 *       WIDGETS
 **********************/

extern lv_obj_t* button_1_ev_0;
extern lv_obj_t* bar_1_ev_0;
extern lv_obj_t* arc_1_ev_0;
extern lv_obj_t* slider_1_ev_0;
extern lv_obj_t* switch_1_ev_0;
extern lv_obj_t* button_2_ev_0;
extern lv_obj_t* switch_2_ev_0;
extern lv_obj_t* button_5_ev_0;
extern lv_obj_t* roller_1_ev_0;
extern lv_obj_t* slider_2_ev_0;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t* page_1_create();

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*PAGE_1_H*/