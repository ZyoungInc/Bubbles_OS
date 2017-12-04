/*class LED {
  public:
    int pin;
    unsigned char level;
    LED(int p, unsigned char l = 0) {
      pin = p;
      pinMode(pin, OUTPUT);
      level = l;
      analogWrite(pin, level);
    }
};
*/
class Button {
  public:
    int pin;
    bool lastState;
    Button(int p) {
      pin = p;
      lastState = HIGH;
      pinMode(pin, INPUT_PULLUP);
    }
    bool isPressed() {
      return digitalRead(pin) == LOW;
    }
    bool isDown() {
      int curState = digitalRead(pin);
      bool ret =
        lastState == HIGH && curState == LOW;
      if (ret) lastState = LOW;
      return ret;
    }
    bool isUP() {
      int curState = digitalRead(pin);
      bool ret =
        lastState == LOW && curState == HIGH;
      if (ret) lastState = HIGH;
      return ret;
    }
};

