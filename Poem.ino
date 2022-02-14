#define WAIT 100

#include <TFT_eSPI.h> // Graphics and font library for ST7735 driver chip
#include <SPI.h>

TFT_eSPI tft = TFT_eSPI(); 

unsigned long y_pos = 0;


void setup() {
  tft.init();
  tft.setRotation(1);
}

void loop() {
  tft.setTextSize(1);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.fillScreen(TFT_BLACK);
  printText();
  y_pos = y_pos - 2;
  if(y_pos<-150){
    y_pos = 0;
    delay(WAIT);
    tft.fillScreen(TFT_BLACK);
    tft.drawString("All Too Well", 100, 40, 2);
    tft.drawString("(Ten Minute Version)", 100, 60, 2);
    tft.drawString("(Taylor's Version)", 100, 80, 2);
    tft.drawString("(From The Vault)", 100, 100, 2);
    delay(3000);
    
  }
  delay(WAIT);
}

void printText(){
  unsigned long line_pos = y_pos;
  tft.drawString("Maybe we got lost in translation", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("Maybe I asked for too much", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("But maybe this thing was a masterpiece", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("masterpiece", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("'Til you tore it all up", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("Running scared, I was there", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("I remember it all too well", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("And you call me up again just to", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("break me like a promise", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("So casually cruel in the", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("name of being honest", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("I'm a crumpled up piece of paper", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("lying here", 0, line_pos, 2);
  line_pos = line_pos + 15;
  tft.drawString("'Cause I remember it all too well", 0, line_pos, 2);
}
