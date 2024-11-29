#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
// #include "lvgl.h"
#include "lv_examples.h"
#include "lv_port_disp.h"
#include "lvgl_helpers.h"
// #include "nv6001.h"

void app_main(void) {
    // nv6001_init();
    // lvgl_driver_init();
    // 初始化显示
    lv_init();
    lv_port_disp_init();

    // // 创建标签并设置文本
    // lv_obj_t *label = lv_label_create(lv_scr_act(), NULL);
    // lv_label_set_text(label, "hello world! ni hao!");
    
    // // 如果需要，可以在此处设置标签位置
    // lv_obj_set_pos(label, 10, 10); // 根据实际需要设置位置

    lv_demo_music();

    while (1) {
        lv_task_handler(); // 处理 LVGL 任务
        vTaskDelay(10 / portTICK_PERIOD_MS); // 适当延迟
    }
}