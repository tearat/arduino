//#define buzzer 7

#define btn_1 8
#define btn_2 9
#define btn_3 10
#define buzzer 12

byte period = 100;

void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(btn_1, INPUT);
  pinMode(btn_2, INPUT);
  pinMode(btn_3, INPUT);
}
 
void loop() {

  byte note_1 = digitalRead(btn_1);
  byte note_2 = digitalRead(btn_2);
  byte note_3 = digitalRead(btn_3);
  int level = 1000;
  if (note_1 == HIGH) {
    level += 500;
  }
  if (note_2 == HIGH) {
    level += 500;
  }
  if (note_3 == HIGH) {
    level += 500;
  }

  if (level > 1000) {
    tone(buzzer, level, 200);
    Serial.println(level);
  }

  delay(500);
  
}
