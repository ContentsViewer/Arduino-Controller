/*
  プログラム
    最終更新日: 4.22.2016
    説明:
      Controllerの動作をテストします.
      自作コントローラが必要
*/
#include "Controller.h"

#define A_BUTTON 8
#define B_BUTTON 4
#define X_BUTTON 1
#define Y_BUTTON 2

//各ボタンの設定
#define UP_BUTTON 1
#define RIGHT_BUTTON 2
#define DOWN_BUTTON 4
#define LEFT_BUTTON 8

Controller ctrlA;
Controller ctrlB;

void setup() {
  Serial.begin(19200);

  ctrlA.Begin(0, 4, DEFAULT);
  ctrlB.Begin(1, 4, DEFAULT);
}

void loop() {

  byte a, b;

  ctrlA.Stick(&a, UP_BUTTON + RIGHT_BUTTON + DOWN_BUTTON + LEFT_BUTTON);
  if (a & RIGHT_BUTTON) {
    Serial.println("RIGHT_BUTTON");
  }

  if (a & LEFT_BUTTON) {
    Serial.println("LEFT_BUTTON");
  }

  if (a & UP_BUTTON) {
    Serial.println("UP_BUTTON");
  }

  if (a & DOWN_BUTTON) {
    Serial.println("DOWN_BUTTON");
  }

  ctrlB.Stick(&b, A_BUTTON + B_BUTTON + X_BUTTON + Y_BUTTON);
  if (b & A_BUTTON) {
    Serial.println("A_BUTTON");
  }

  if (b & B_BUTTON) {
    Serial.println("B_BUTTON");
  }

  if (b & X_BUTTON) {
    Serial.println("X_BUTTON");
  }

  if (b & Y_BUTTON) {
    Serial.println("Y_BUTTON");
  }
}
