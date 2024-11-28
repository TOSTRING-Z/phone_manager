#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "lvgl.h"
#include "lv_port_disp.h"
#include "lv_examples.h"
#include "nv6001.h"

#define DRAW_BUF_SIZE (LV_HOR_RES_MAX)

void app_main(void) {
    // 初始化显示
    lv_init();
    // lv_port_disp_init();
    nv6001_init();
    static lv_disp_buf_t draw_buf_dsc_1;
    DRAM_ATTR static lv_color_t buf_2_1[DRAW_BUF_SIZE];
    DRAM_ATTR static lv_color_t buf_2_2[DRAW_BUF_SIZE];
    lv_disp_buf_init(&draw_buf_dsc_1, buf_2_1, buf_2_2, DRAW_BUF_SIZE);
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.hor_res = LV_VER_RES_MAX;
    disp_drv.ver_res = LV_HOR_RES_MAX;
    disp_drv.flush_cb = nv6001_lv_fb_flush;
    disp_drv.buffer = &draw_buf_dsc_1;
    lv_disp_drv_register(&disp_drv);
    lv_obj_t *label = lv_label_create(lv_scr_act(),NULL);
    lv_label_set_text(label, "yeah");
    // lv_demo_music();
    while (1) {
        lv_task_handler();
        vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}