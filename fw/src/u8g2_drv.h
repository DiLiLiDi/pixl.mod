#ifndef U8G2_DRV_H
#define U8G2_DRV_H

#include "u8g2.h"


extern u8g2_t u8g2;


void u8g2_drv_init();
void u8g2_drv_deinit();
void u8g2_drv_app_error(char *error);
#endif