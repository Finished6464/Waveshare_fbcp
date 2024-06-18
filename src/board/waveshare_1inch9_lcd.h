#pragma once

// Data specific to WaveShare 170x320, 1.9inch IPS LCD ST7789VW hat, https://www.waveshare.com/w/upload/a/ae/ST7789_Datasheet.pdf
#ifdef WAVESHARE_1INCH9_LCD

    #ifndef __WAVESHARE_1INCH9_LCD_H

        #define __WAVESHARE_1INCH9_LCD_H

        #if !defined(GPIO_TFT_DATA_CONTROL)
            #define GPIO_TFT_DATA_CONTROL 25
        #endif

        #if !defined(GPIO_TFT_BACKLIGHT)
            #define GPIO_TFT_BACKLIGHT 18
        #endif

        #if !defined(GPIO_TFT_RESET_PIN)
            #define GPIO_TFT_RESET_PIN 27
        #endif
        
        #define DISPLAY_NATIVE_COVERED_TOP_SIDE 0x23
        
        #if !defined (SET_DISPLAY_WIDTH)
            #define DISPLAY_NATIVE_WIDTH (320)
        #endif

        #if !defined (SET_DISPLAY_HEIGHT)
            #define DISPLAY_NATIVE_HEIGHT (170+DISPLAY_NATIVE_COVERED_TOP_SIDE)
            
        #endif

    #endif

#endif
