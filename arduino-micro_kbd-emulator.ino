#include <Keyboard.h>

void setup()
{
  Keyboard.begin();
}

void loop()
{
    delay(20000);
    Keyboard.press(KEY_UP_ARROW);
    delay(25);
    Keyboard.release(KEY_UP_ARROW);
    delay(125);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(25);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(125);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(25);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(125);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(25);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(125);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(25);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(125);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(25);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(125);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(25);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(125);
    Keyboard.press(KEY_RIGHT_ARROW);
    delay(25);
    Keyboard.release(KEY_RIGHT_ARROW);
    delay(125);
    Keyboard.press(KEY_RETURN);
    delay(25);
    Keyboard.release(KEY_RETURN);
    delay(400);
    Keyboard.press(KEY_UP_ARROW);
    delay(25);
    Keyboard.release(KEY_UP_ARROW);
    delay(125);
    Keyboard.press(KEY_UP_ARROW);
    delay(25);
    Keyboard.release(KEY_UP_ARROW);
    delay(125);
    Keyboard.press(KEY_UP_ARROW);
    delay(25);
    Keyboard.release(KEY_UP_ARROW);
    delay(125);	
    Keyboard.press(KEY_RETURN);
    delay(25);
    Keyboard.release(KEY_RETURN);
    delay(125);
    exit(0);
}
