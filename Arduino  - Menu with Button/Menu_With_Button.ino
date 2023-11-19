/*
   Title       : Menu with Button
   Author      : Мачи Заря
   Description : Display menu on LCD 16 x 2 and I2C with 5 Buttons
*/

#include <LiquidCrystal_I2C.h>
#include <Wire.h>


const int BTN1 = 2;
const int BTN2 = 3;
const int BTN3 = 4;
const int BTN4 = 5;
const int BTN5 = 6;

LiquidCrystal_I2C lcd(0x27, 16, 2);
int menuLevel = 0;
int LogicA, LogicB, LogicC, LogicD = 0;
int Btn_Up, Btn_Down, Btn_Left, Btn_Right, Btn_Enter, Btn_Ok = 0;
int PressA, PressB, PressC, PressD = 0;

void setup()
{
  Serial.begin(9600);
  lcd.begin();
  lcd.backlight();
  pinMode(BTN1, INPUT_PULLUP);
  pinMode(BTN2, INPUT_PULLUP);
  pinMode(BTN3, INPUT_PULLUP);
  pinMode(BTN4, INPUT_PULLUP);
  pinMode(BTN5, INPUT_PULLUP);
  lcd.setCursor(0, 0); lcd.print(" == WELCOME ==  ");
  lcd.setCursor(0, 1); lcd.print("   PRESS [OK]   ");
}

void loop()
{
  Btn_Up_Click();
  Btn_Down_Click();
  Btn_Right_Click();
  Btn_Left_Click();
  Btn_Enter_Click();

  if (LogicA == 0)
  {
    if (LogicB == 0)
    {
      Menu_Gyro();
    }
    else if (LogicB == 1)
    {
      Menu1();
    }
  }
  else if (LogicA == 1)
  {
    if (LogicB == 0)
    {
      Menu_Calib();
    }
    else if (LogicB == 1)
    {
      Menu2();
    }
  }
}
