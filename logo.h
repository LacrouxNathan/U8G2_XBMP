#include <U8g2lib.h>

#define logo_width 128
#define logo_height 64
static const unsigned char logo[] U8X8_PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x01, 0x00, 0x00, 0x80, 0xFF, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xFF, 0x01, 0x00, 
  0x00, 0x80, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x80, 0x01, 0x00, 0x00, 0x80, 0x81, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x80, 0x01, 0x00, 0x00, 0x80, 0x81, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x80, 0x01, 0x00, 
  0x00, 0x80, 0x81, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x80, 0x01, 0x00, 0x00, 0x80, 0x81, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x80, 0x01, 0x00, 0x00, 0x80, 0x81, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x80, 0x7F, 0x00, 
  0x00, 0xFF, 0x81, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0xFF, 0x7F, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x7F, 0x60, 0x00, 0x00, 0x03, 0xFE, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 
  0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x03, 0x06, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0x00, 
  0x00, 0x03, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x7F, 0xE0, 0xFF, 0xFF, 0x03, 0xFE, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x7F, 0xE0, 0xFF, 0xFF, 0x03, 0xFE, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x80, 0x3F, 0x00, 
  0x00, 0xFC, 0x81, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0x80, 0x3F, 0x00, 0x00, 0xFC, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x3F, 0x00, 0x00, 0xFC, 0x01, 0xC0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x3F, 0x00, 
  0x00, 0xFC, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x03, 0x80, 0x3F, 0x00, 0x00, 0xFC, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x03, 0x80, 0x3F, 0x00, 0x00, 0xFC, 0x01, 0xC0, 
  0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x03, 0x80, 0x3F, 0x00, 
  0x00, 0xFC, 0x01, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x7F, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xFE, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x7F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x61, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x61, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xC6, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x61, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0xC6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x61, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0xC6, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x61, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xC6, 0x80, 0xFF, 0xFF, 
  0xFF, 0xFF, 0x81, 0x61, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0xC6, 0x80, 0x01, 0x00, 0x00, 0x80, 0x81, 0x61, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0xC6, 0x80, 0x01, 0x00, 0x00, 0x80, 0x81, 0x61, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0xC6, 0x80, 0x01, 0x00, 
  0x00, 0x80, 0x81, 0x61, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 
  0xC6, 0x80, 0x01, 0x00, 0x00, 0x80, 0x81, 0x61, 0x60, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0xC6, 0x80, 0xFF, 0x3F, 0xFC, 0xFF, 0x81, 0x61, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xC7, 0xFF, 0xFF, 0x3F, 
  0xFC, 0xFF, 0xFF, 0xE1, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 
  0xC7, 0x7F, 0x00, 0x30, 0x0C, 0x00, 0xFE, 0xE1, 0x7F, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x30, 0x0C, 0x00, 0x06, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x30, 
  0x0C, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x00, 0x30, 0x0C, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x30, 0x0C, 0x00, 0x06, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x30, 
  0x0C, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xE0, 0xFF, 0x3F, 0xFC, 0xFF, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xFF, 0x3F, 0xFC, 0xFF, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, };