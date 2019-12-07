#ifndef _HX8357_H
#define _HX8357_H

#ifdef __cplusplus
 extern "C" {
#endif
	 
#include "stm32f1xx_hal.h"
#include "stm32f1xx_hal_gpio.h"
#include "stm32f1xx_hal_rcc.h"
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

#define CMD *(uint16_t *)0x60000000
#define DAT *(uint16_t *)0x60020000


#define DB_00_PIN  GPIO_PIN_0
#define DB_00_PORT GPIOA

#define DB_01_PIN  GPIO_PIN_1
#define DB_01_PORT GPIOA

#define DB_02_PIN  GPIO_PIN_2
#define DB_02_PORT GPIOC

#define DB_03_PIN  GPIO_PIN_3
#define DB_03_PORT GPIOC

#define DB_04_PIN  GPIO_PIN_6
#define DB_04_PORT GPIOC
#define DB_05_PIN  GPIO_PIN_5
#define DB_05_PORT GPIOA
#define DB_06_PIN  GPIO_PIN_6
#define DB_06_PORT GPIOA
#define DB_07_PIN  GPIO_PIN_7
#define DB_07_PORT GPIOA
#define DB_08_PIN  GPIO_PIN_8
#define DB_08_PORT GPIOA
#define DB_09_PIN  GPIO_PIN_9
#define DB_09_PORT GPIOA
#define DB_10_PIN  GPIO_PIN_10
#define DB_10_PORT GPIOA
#define DB_11_PIN  GPIO_PIN_11
#define DB_11_PORT GPIOA
#define DB_12_PIN  GPIO_PIN_12
#define DB_12_PORT GPIOA
#define DB_13_PIN  GPIO_PIN_0
#define DB_13_PORT GPIOB
#define DB_14_PIN  GPIO_PIN_2
#define DB_14_PORT GPIOB
#define DB_15_PIN  GPIO_PIN_15
#define DB_15_PORT GPIOA
#define LCD_WR_PIN  GPIO_PIN_4
#define LCD_WR_PORT GPIOC
#define LCD_RS_PIN  GPIO_PIN_5
#define LCD_RS_PORT GPIOC
#define LCD_CS_PIN  GPIO_PIN_1
#define LCD_CS_PORT GPIOC
#define LCD_RST_PIN  GPIO_PIN_0
#define LCD_RST_PORT GPIOC

#define DB_00_S HAL_GPIO_WritePin(DB_00_PORT, DB_00_PIN, GPIO_PIN_SET);
#define DB_00_R HAL_GPIO_WritePin(DB_00_PORT, DB_00_PIN, GPIO_PIN_RESET);


#define DB_01_S HAL_GPIO_WritePin(DB_01_PORT, DB_01_PIN, GPIO_PIN_SET);
#define DB_01_R HAL_GPIO_WritePin(DB_01_PORT, DB_01_PIN, GPIO_PIN_RESET);
#define DB_02_S HAL_GPIO_WritePin(DB_02_PORT, DB_02_PIN, GPIO_PIN_SET);
#define DB_02_R HAL_GPIO_WritePin(DB_02_PORT, DB_02_PIN, GPIO_PIN_RESET);
#define DB_03_S HAL_GPIO_WritePin(DB_03_PORT, DB_03_PIN, GPIO_PIN_SET);
#define DB_03_R HAL_GPIO_WritePin(DB_03_PORT, DB_03_PIN, GPIO_PIN_RESET);
#define DB_04_S HAL_GPIO_WritePin(DB_04_PORT, DB_04_PIN, GPIO_PIN_SET);
#define DB_04_R HAL_GPIO_WritePin(DB_04_PORT, DB_04_PIN, GPIO_PIN_RESET);
#define DB_05_S HAL_GPIO_WritePin(DB_05_PORT, DB_05_PIN, GPIO_PIN_SET);
#define DB_05_R HAL_GPIO_WritePin(DB_05_PORT, DB_05_PIN, GPIO_PIN_RESET);
#define DB_06_S HAL_GPIO_WritePin(DB_06_PORT, DB_06_PIN, GPIO_PIN_SET);
#define DB_06_R HAL_GPIO_WritePin(DB_06_PORT, DB_06_PIN, GPIO_PIN_RESET);
#define DB_07_S HAL_GPIO_WritePin(DB_07_PORT, DB_07_PIN, GPIO_PIN_SET);
#define DB_07_R HAL_GPIO_WritePin(DB_07_PORT, DB_07_PIN, GPIO_PIN_RESET);
#define DB_08_S HAL_GPIO_WritePin(DB_08_PORT, DB_08_PIN, GPIO_PIN_SET);
#define DB_08_R HAL_GPIO_WritePin(DB_08_PORT, DB_08_PIN, GPIO_PIN_RESET);
#define DB_09_S HAL_GPIO_WritePin(DB_09_PORT, DB_09_PIN, GPIO_PIN_SET);
#define DB_09_R HAL_GPIO_WritePin(DB_09_PORT, DB_09_PIN, GPIO_PIN_RESET);
#define DB_10_S HAL_GPIO_WritePin(DB_10_PORT, DB_10_PIN, GPIO_PIN_SET);
#define DB_10_R HAL_GPIO_WritePin(DB_10_PORT, DB_10_PIN, GPIO_PIN_RESET);
#define DB_11_S HAL_GPIO_WritePin(DB_11_PORT, DB_11_PIN, GPIO_PIN_SET);
#define DB_11_R HAL_GPIO_WritePin(DB_11_PORT, DB_11_PIN, GPIO_PIN_RESET);
#define DB_12_S HAL_GPIO_WritePin(DB_12_PORT, DB_12_PIN, GPIO_PIN_SET);
#define DB_12_R HAL_GPIO_WritePin(DB_12_PORT, DB_12_PIN, GPIO_PIN_RESET);
#define DB_13_S HAL_GPIO_WritePin(DB_13_PORT, DB_13_PIN, GPIO_PIN_SET);
#define DB_13_R HAL_GPIO_WritePin(DB_13_PORT, DB_13_PIN, GPIO_PIN_RESET);
#define DB_14_S HAL_GPIO_WritePin(DB_14_PORT, DB_14_PIN, GPIO_PIN_SET);
#define DB_14_R HAL_GPIO_WritePin(DB_14_PORT, DB_14_PIN, GPIO_PIN_RESET);
#define DB_15_S HAL_GPIO_WritePin(DB_15_PORT, DB_15_PIN, GPIO_PIN_SET);
#define DB_15_R HAL_GPIO_WritePin(DB_15_PORT, DB_15_PIN, GPIO_PIN_RESET);
#define LCD_WR_S HAL_GPIO_WritePin(LCD_WR_PORT, LCD_WR_PIN, GPIO_PIN_SET);
#define LCD_WR_R HAL_GPIO_WritePin(LCD_WR_PORT, LCD_WR_PIN, GPIO_PIN_RESET);
#define LCD_RS_S HAL_GPIO_WritePin(LCD_RS_PORT, LCD_RS_PIN, GPIO_PIN_SET);
#define LCD_RS_R HAL_GPIO_WritePin(LCD_RS_PORT, LCD_RS_PIN, GPIO_PIN_RESET);
#define LCD_CS_S HAL_GPIO_WritePin(LCD_CS_PORT, LCD_CS_PIN, GPIO_PIN_SET);
#define LCD_CS_R HAL_GPIO_WritePin(LCD_CS_PORT, LCD_CS_PIN, GPIO_PIN_RESET);
#define LCD_RST_S HAL_GPIO_WritePin(LCD_RST_PORT, LCD_RST_PIN, GPIO_PIN_SET);
#define LCD_RST_R HAL_GPIO_WritePin(LCD_RST_PORT, LCD_RST_PIN, GPIO_PIN_RESET);

/* USER CODE BEGIN Private defines */
#define _3_Tiny                &Font_3_Tiny
#define _3_PicoPixel           &Font_3_PicoPixel
#define _3_TomThumb_Extended   &Font_3_TomThumb_Extended
#define _5_Org                 &Font_5_Org
#define _8_Sinclair            &Font_8_Sinclair
#define _8_Sinclair_Inverted   &Font_8_Sinclair_Inverted
#define _8_Tiny                &Font_8_Tiny
#define _8_Myke                &Font_8_Myke
#define _8_Default             &Font_8_Default
#define _8_Retro               &Font_8_Retro
#define _9_Mono                &Font_9_Mono
#define _9_Mono_Bold           &Font_9_Mono_Bold
#define _9_Mono_Bold_Oblique   &Font_9_Mono_Bold_Oblique
#define _9_Mono_Oblique        &Font_9_Mono_Oblique
#define _9_Sans                &Font_9_Sans
#define _9_Sans_Bold           &Font_9_Sans_Bold
#define _9_Sans_Bold_Oblique   &Font_9_Sans_Bold_Oblique
#define _9_Sans_Oblique        &Font_9_Sans_Oblique
#define _9_Serif               &Font_9_Serif
#define _9_Serif_Bold          &Font_9_Serif_Bold
#define _9_Serif_Bold_Italic   &Font_9_Serif_Bold_Italic
#define _9_Serif_Italic        &Font_9_Serif_Italic
#define _12_Mono               &Font_12_Mono
#define _12_Mono_Bold          &Font_12_Mono_Bold
#define _12_Mono_Bold_Oblique  &Font_12_Mono_Bold_Oblique
#define _12_Mono_Oblique       &Font_12_Mono_Oblique
#define _12_Sans               &Font_12_Sans
#define _12_Sans_Bold          &Font_12_Sans_Bold
#define _12_Sans_Bold_Oblique  &Font_12_Sans_Bold_Oblique
#define _12_Sans_Oblique       &Font_12_Sans_Oblique
#define _12_Serif              &Font_12_Serif
#define _12_Serif_Bold         &Font_12_Serif_Bold
#define _12_Serif_Bold_Italic  &Font_12_Serif_Bold_Italic
#define _12_Serif_Italic       &Font_12_Serif_Italic
#define _16_Arial              &Font_16_Arial
#define _16_Arial_Bold         &Font_16_Arial_Bold
#define _16_Arial_Italic       &Font_16_Arial_Italic
#define _16_Default            &Font_16_Default
#define _16_FranklinGothic     &Font_16_FranklinGothic
#define _16_Hallfetica         &Font_16_Hallfetica
#define _16_Nadianne           &Font_16_Nadianne
#define _16_Sinclair           &Font_16_Sinclair
#define _16_Sinclair_Inverted  &Font_16_Sinclair_Inverted
#define _16_Swiss_Outline      &Font_16_Swiss_Outline
#define _16_Matrix_Full        &Font_16_Matrix_Full
#define _16_Matrix_Full_Slash  &Font_16_Matrix_Full_Slash
#define _16_Matrix_Num         &Font_16_Matrix_Num
#define _16_Arial_Round        &Font_16_Arial_Round
#define _16_OCR                &Font_16_OCR
#define _16_Segment_16_Full    &Font_16_Segment_16_Full
#define _16_Grotesk            &Font_16_Grotesk
#define _16_Grotesk_Bold       &Font_16_Grotesk_Bold
#define _16_Retro              &Font_16_Retro
#define _18_Mono               &Font_18_Mono
#define _18_Mono_Bold          &Font_18_Mono_Bold
#define _18_Mono_Bold_Oblique  &Font_18_Mono_Bold_Oblique
#define _18_Mono_Oblique       &Font_18_Mono_Oblique
#define _18_Sans               &Font_18_Sans
#define _18_Sans_Bold          &Font_18_Sans_Bold
#define _18_Sans_Bold_Oblique  &Font_18_Sans_Bold_Oblique
#define _18_Sans_Oblique       &Font_18_Sans_Oblique
#define _18_Serif              &Font_18_Serif
#define _18_Serif_Bold         &Font_18_Serif_Bold
#define _18_Serif_Bold_Italic  &Font_18_Serif_Bold_Italic
#define _18_Serif_Italic       &Font_18_Serif_Italic
#define _24_Matrix_Num         &Font_24_Matrix_Num
#define _24_Inconsola          &Font_24_Inconsola
#define _24_Ubuntu             &Font_24_Ubuntu
#define _24_Ubuntu_Bold        &Font_24_Ubuntu_Bold
#define _24_Segment_16_Full    &Font_24_Segment_16_Full
#define _24_Mono               &Font_24_Mono
#define _24_Mono_Bold          &Font_24_Mono_Bold
#define _24_Mono_Bold_Oblique  &Font_24_Mono_Bold_Oblique
#define _24_Mono_Oblique       &Font_24_Mono_Oblique
#define _24_Grotesk            &Font_24_Grotesk
#define _24_Grotesk_Bold       &Font_24_Grotesk_Bold
#define _24_Sans               &Font_24_Sans
#define _24_Sans_Bold          &Font_24_Sans_Bold
#define _24_Sans_Bold_Oblique  &Font_24_Sans_Bold_Oblique
#define _24_Sans_Oblique       &Font_24_Sans_Oblique
#define _24_Serif              &Font_24_Serif
#define _24_Serif_Bold         &Font_24_Serif_Bold
#define _24_Serif_Bold_Italic  &Font_24_Serif_Bold_Italic
#define _24_SerifItalic        &Font_24_SerifItalic
#define _32_Dingbats           &Font_32_Dingbats
#define _32_Special            &Font_32_Special
#define _32_Calibri_Bold       &Font_32_Calibri_Bold
#define _32_Arial_Num_Plus     &Font_32_Arial_Num_Plus
#define _32_Matrix_Num         &Font_32_Matrix_Num
#define _32_Segment_7_Full     &Font_32_Segment_7_Full
#define _32_Segment_7_Num_Plus &Font_32_Segment_7_Num_Plus
#define _32_Segment_16_Full    &Font_32_Segment_16_Full
#define _32_Segment_18_Full    &Font_32_Segment_18_Full
#define _32_Grotesk            &Font_32_Grotesk
#define _32_Grotesk_Bold       &Font_32_Grotesk_Bold
#define _40_Segment_16_Full    &Font_40_Segment_16_Full
#define _48_Battery            &Font_48_Battery
#define _48_Segment_16_Num     &Font_48_Segment_16_Num
#define _64_Segment_16_Num     &Font_64_Segment_16_Num
#define _64_Segment_7_Num      &Font_64_Segment_7_Num
#define _96_Segment_7_Num      &Font_96_Segment_7_Num
#define _96_Segment_16_Num     &Font_96_Segment_16_Num
#define _128_Segment_16_Num    &Font_128_Segment_16_Num
					
#define BGR 1

#define DEFAULT_ORIENTATION 2

#define BLACK   0x000000 /*   0,   0,   0 */
#define WHITE   0xFFFFFF /* 255, 255, 255 */
#define RED     0xFF0000 /* 255,   0,   0 */
#define BLUE    0x0000FF /*   0,   0, 255 */
#define BLUE_D  0x0000A0 /*   0,   0, 160 */
#define CYAN    0x00FFFF /*   0, 255, 255 */
#define CYAN_D  0x008080 /*   0, 128, 128 */
#define YELLOW  0xFFFF00 /* 255, 255,   0 */
#define MAGENTA 0xFF00FF /* 255,   0, 255 */
#define GREEN   0x00FF00 /*   0, 255,   0 */
#define GREEN_D 0x008000 /*   0, 128,   0 */
#define PURPLE  0x800080 /* 128,   0, 128 */
#define TEAL    0x008080 /*   0, 128, 128 */
#define NAVY    0x000080 /*   0,   0, 128 */
#define SILVER  0xC0C0C0 /* 192, 192, 192 */
#define GRAY    0x808080 /* 128, 128, 128 */
#define ORANGE  0xFFA500 /* 255, 165,   0 */
#define BROWN   0xA52A2A /* 165, 255,  42 */
#define MAROON  0x800000 /* 128,   0,   0 */
#define OLIVE   0x808000 /* 128, 128,   0 */
#define LIME    0xBFFF00 /* 191, 255,   0 */

typedef struct { // Data stored PER GLYPH
	uint16_t bitmapOffset;     // Pointer into GFXfont->bitmap
	uint8_t  width, height;    // Bitmap dimensions in pixels
	uint8_t  xAdvance;         // Distance to advance cursor (x axis)
	int8_t   xOffset, yOffset; // Dist from cursor position to UL corner
} GFXglyph;

typedef struct { // Data stored for FONT AS A WHOLE:
	uint8_t  *bitmap;      // Glyph bitmaps, concatenated
	GFXglyph *glyph;       // Glyph array
	uint8_t   first, last; // ASCII extents
	uint8_t   yAdvance;    // Newline distance (y axis)
} GFXfont;

inline uint16_t RGB(uint8_t r, uint8_t g, uint8_t b);

void LCD_Init(void);
void LCD_Orientation(uint8_t orientation);

void LCD_Pixel(uint16_t x, uint16_t y, uint32_t color24);
void LCD_Rect_Fill(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint32_t color24);
void LCD_Line(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint8_t size, uint32_t color24);
void LCD_Rect(uint16_t x, uint16_t y, uint16_t w, uint16_t h, uint8_t size, uint32_t color24);
void LCD_Triangle(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint8_t size, uint32_t color24);
void LCD_Triangle_Fill(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2, uint16_t x3, uint16_t y3, uint32_t color24);
void LCD_Ellipse(int16_t x0, int16_t y0, int16_t rx, int16_t ry, uint8_t fill, uint8_t size, uint32_t color24);
void LCD_Circle(uint16_t x, uint16_t y, uint8_t radius, uint8_t fill, uint8_t size, uint32_t color24);
void LCD_Rect_Round(uint16_t x, uint16_t y, uint16_t length, uint16_t width, uint16_t r, uint8_t size, uint32_t color24);
void LCD_Rect_Round_Fill(uint16_t x, uint16_t y, uint16_t length, uint16_t width, uint16_t r, uint32_t color24);
void LCD_Font(uint16_t x, uint16_t y, char *text, const GFXfont *p_font, uint8_t size, uint32_t color24);

#define MADCTL_MY  0x80
#define MADCTL_MX  0x40
#define MADCTL_MV  0x20
#define MADCTL_ML  0x10
#define MADCTL_RGB 0x00
//#define MADCTL_BGR 0x08 //default
#define MADCTL_BGR 0x0A // под разные оси 09, 0A, 0B
#define MADCTL_MH  0x04

#define HX8357_SLPOUT 			0x11
#define HX8357_INVON 				0x21
#define HX8357_DISPOFF 			0x28
#define HX8357_DISPON 			0x29
#define HX8357_CASET 				0x2A
#define HX8357_PASET 				0x2B
#define HX83h7_RAMWR 				0x2C
#define HX8357_TEON 				0x35
#define HX8357_MADCTL 			0x36
#define HX8357_COLMOD 			0x3A
#define HX8357_WRDISBV 			0x51
#define HX8357_WRCTRLD 			0x53
#define HX8357_WRCABC 			0x55
#define HX8357_WRCABCMB 		0x5E
#define HX8257_SETDISPLAY 	0xB4
#define HX8357_SETPANEL 		0xC0
#define HX8357_SETNORTIM 		0xC1
#define HX8357_SETOSC 			0xC5
#define HX8357_SETGAMMA 		0xC8
#define HX8357_SETPOWER 		0xD0
#define HX8357_SETVCOM 			0xD1
#define HX8357_SETNORPOW 		0xD2
#define HX8357_SETPARPOW 		0xD3
#define HX8357_SETIDLPOW 		0xD4
#define HX8357_SETPANELREL 	0xE9
#define HX8357_SETEQ 				0xEE

#ifdef __cplusplus
}
#endif

#endif /* _HX8357_FSMC_H_ */
