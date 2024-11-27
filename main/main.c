#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "sdkconfig.h"
#include "esp_log.h"
#include "disp_spi.h"
#include "driver/gpio.h"
#include "lvgl_helpers.h"
#include "driver/nv6001.h"

void app_main(void)
{
    // 初始化显示硬件
    nv6001_init();

    while (1)
    {
        write_line(0,0xFFFF);
        write_line(10,0x12B3);
        write_line(20,0xECD5);
        display_color(0x0000);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}