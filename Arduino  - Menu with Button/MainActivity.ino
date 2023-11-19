
void Btn_Up_Click()
{
  Btn_Up = digitalRead(BTN1);
  if (Btn_Up == HIGH && PressA == 0)
  {
    LogicA = 0;
    PressA = 1;
  }
  else if (Btn_Up == LOW)
  {
    PressA = 0;
  }
}


void Btn_Down_Click()
{
  Btn_Down = digitalRead(BTN2);
  if (Btn_Down == HIGH && PressA == 0)
  {
    LogicA = 1;
    PressA = 1;
  }
  else if (Btn_Down == LOW)
  {
    PressA = 0;
  }
}


void Btn_Left_Click()
{
  Btn_Left = digitalRead(BTN3);
  if (Btn_Left == HIGH && PressB == 0)
  {
    LogicB = 0;
    PressB = 1;
  }
  else if (Btn_Left == LOW)
  {
    PressB = 0;
  }
}


void Btn_Right_Click()
{
  Btn_Right = digitalRead(BTN4);
  if (Btn_Right == HIGH && PressB == 0)
  {
    LogicB = 1;
    PressB = 1;
  }
  else if (Btn_Right == LOW)
  {
    PressB = 0;
  }
}


void Btn_Enter_Click()
{
  Btn_Enter = digitalRead(BTN5);
  if (Btn_Enter == HIGH && PressC == 0)
  {
    LogicC = 1;
    PressC = 1;
  }
  else if (Btn_Enter == LOW)
  {
    PressC = 0;
  }
}


void Menu1()
{
  lcd.setCursor(0, 0); lcd.print("1. GYRO        <");
  lcd.setCursor(0, 1); lcd.print("2. CALIBRATION  ");
}


void Menu2()
{
  lcd.setCursor(0, 0); lcd.print("1. GYRO         ");
  lcd.setCursor(0, 1); lcd.print("2. CALIBRATION <");
}


void Menu_Gyro()
{
  lcd.setCursor(0, 0); lcd.print("      GYRO      ");
  lcd.setCursor(0, 1); lcd.print(" X:   Y:   Z:   ");
}


void Menu_Calib()
{
  lcd.setCursor(0, 0); lcd.print("      CALIB     ");
  lcd.setCursor(0, 1); lcd.print(" A:     B:      ");
}
