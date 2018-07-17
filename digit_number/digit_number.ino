byte led_8 = 8;
byte led_9 = 9;
byte led_10 = 10;
byte led_11 = 11;
byte led_12 = 12;
byte led_13 = 13;
byte led_7 = 7;

int interval = 1000;

void setup()

{
pinMode(led_8, OUTPUT);
pinMode(led_9, OUTPUT);
pinMode(led_10, OUTPUT);
pinMode(led_11, OUTPUT);
pinMode(led_12, OUTPUT);
pinMode(led_13, OUTPUT);
pinMode(led_7, OUTPUT);
}

void _clear()
{
  digitalWrite(led_8, LOW);
  digitalWrite(led_9, LOW);
  digitalWrite(led_10, LOW);
  digitalWrite(led_11, LOW);
  digitalWrite(led_12, LOW);
  digitalWrite(led_13, LOW);
  digitalWrite(led_7, LOW);
}

void loop()
{

// 1
_clear();
digitalWrite(led_11, HIGH);
digitalWrite(led_12, HIGH);
delay(interval);

// 2
_clear();
digitalWrite(led_10, HIGH);
digitalWrite(led_11, HIGH);
digitalWrite(led_7, HIGH);
digitalWrite(led_8, HIGH);
digitalWrite(led_13, HIGH);
delay(interval);

// 3
_clear();
digitalWrite(led_10, HIGH);
digitalWrite(led_11, HIGH);
digitalWrite(led_12, HIGH);
digitalWrite(led_8, HIGH);
digitalWrite(led_13, HIGH);
delay(interval);

// 4
_clear();
digitalWrite(led_9, HIGH);
digitalWrite(led_8, HIGH);
digitalWrite(led_11, HIGH);
digitalWrite(led_8, HIGH);
digitalWrite(led_12, HIGH);
delay(interval);

// 5
_clear();
digitalWrite(led_10, HIGH);
digitalWrite(led_9, HIGH);
digitalWrite(led_8, HIGH);
digitalWrite(led_13, HIGH);
digitalWrite(led_12, HIGH);
delay(interval);

// 6
_clear();
digitalWrite(led_10, HIGH);
digitalWrite(led_9, HIGH);
digitalWrite(led_8, HIGH);
digitalWrite(led_13, HIGH);
digitalWrite(led_12, HIGH);
digitalWrite(led_7, HIGH);
delay(interval);

// 7
_clear();
digitalWrite(led_10, HIGH);
digitalWrite(led_11, HIGH);
digitalWrite(led_12, HIGH);
delay(interval);

// 8
_clear();
digitalWrite(led_8, HIGH);
digitalWrite(led_9, HIGH);
digitalWrite(led_10, HIGH);
digitalWrite(led_11, HIGH);
digitalWrite(led_12, HIGH);
digitalWrite(led_13, HIGH);
digitalWrite(led_7, HIGH);
delay(interval);

// 9
_clear();
digitalWrite(led_8, HIGH);
digitalWrite(led_9, HIGH);
digitalWrite(led_10, HIGH);
digitalWrite(led_11, HIGH);
digitalWrite(led_12, HIGH);
digitalWrite(led_13, HIGH);
delay(interval);

// 0
_clear();
digitalWrite(led_9, HIGH);
digitalWrite(led_10, HIGH);
digitalWrite(led_11, HIGH);
digitalWrite(led_12, HIGH);
digitalWrite(led_13, HIGH);
digitalWrite(led_7, HIGH);
delay(interval);

}
