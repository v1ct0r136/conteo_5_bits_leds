int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;
int timestay = 1000;
int leds[] = {led1, led2, led3, led4, led5};

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 5; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int numero = 0; numero < 32; numero++) {
    for (int i = 0; i < 5; i++) {

      if ((numero >> i) & 1) {
        digitalWrite(leds[i], HIGH);
      } else {
        digitalWrite(leds[i], LOW);
      }
    }

    delay(timestay);
  }
}
