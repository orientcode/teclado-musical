#define DO 264
#define RE 296
#define MI 332
#define FA 352

#define btnDO 3
#define btnRE 4
#define btnMI 5
#define btnFA 6

#define BUZZER 7

void setup() {
  pinMode(btnDO, INPUT);
  pinMode(btnRE, INPUT);
  pinMode(btnMI, INPUT);
  pinMode(btnFA, INPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {

  if (digitalRead(btnDO) == HIGH) {
    tone(BUZZER, DO);
  }
  else if (digitalRead(btnRE) == HIGH) {
    tone(BUZZER, RE);
  }
  else if (digitalRead(btnMI) == HIGH) {
    tone(BUZZER, MI);
  }
  else if (digitalRead(btnFA) == HIGH) {
    tone(BUZZER, FA);
  }
  else {
    noTone(BUZZER);
  }

}
