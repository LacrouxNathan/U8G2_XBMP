# U8G2 drawing test

## Image

To use a an image into your program you need to convert it to the **XBM** file format.

you can make it using differents tools or webstite (Adobe photoshop can do it)

The result file will look like that :
```c
#define _width 128
#define _height 32
static char _bits[] = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00... };
```

You have to change the type to match signatures of U8G2 functions :

```c
#define logo_width 128
#define logo_height 32
static const unsigned char logo[] U8X8_PROGMEM = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00... };
```

Now you can use the functin to draw our pic :
```c
disp.drawXBMP(0, 0, logo_width, logo_height, logo);
```