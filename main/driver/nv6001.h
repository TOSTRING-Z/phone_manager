#ifndef LVGL_DEMO_nv6001_H
#define LVGL_DEMO_nv6001_H

#include <lvgl.h>

// 定义您的SPI和GPIO配置
#define SPI_BUS SPI3_HOST

#define CS_PIN GPIO_NUM_6
#define DC_PIN GPIO_NUM_7
#define RST_PIN GPIO_NUM_8
#define MOSI_PIN GPIO_NUM_15
#define SCK_PIN GPIO_NUM_17

#define COL 120 // x ↑
#define ROW 240 // y →

#define PARALLEL_LINES 8

typedef void(*lcd_flush_done_cb)(void* param);

/*
 The LCD needs a bunch of command/argument values to be initialized. They are stored in this struct.
*/
typedef struct {
    uint8_t cmd;
    uint8_t data[172];
    uint8_t databytes; //No of data in data; bit 7 = delay after set; 0xFF = end of cmds.
} lcd_init_cmd_t;

void write_line(int pl,uint16_t color);
void display_color(uint16_t color);
void nv6001_init();
void nv6001_lv_fb_flush(lv_disp_drv_t *drv, const lv_area_t *area, lv_color_t *color_map);

#endif //LVGL_DEMO_nv6001_H