#include <Arduino.h>
#include <U8g2lib.h>

#define SDA 21
#define SCL 22
U8G2_SH1106_128X64_NONAME_F_HW_I2C disp(U8G2_R0, U8X8_PIN_NONE, SCL, SDA); // OLEDs without Reset of the Display


void setup() {
	Serial.begin(115200);
	disp.begin();
    drawLogo();
}

void drawLogo() {
    disp.firstPage();
    do {
        disp.drawXBMP(0, 0, logo_width, logo_height, logo);
    } while (disp.nextPage());

}

void loop() {}