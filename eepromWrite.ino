#include <EEPROM.h>

//Write the serialnumber here. It just should contain 5 characters
const char * switchSernum = "D0544";

void setup() {

  for (int i = 0; i < 5; i ++)
  {
    EEPROM.write(i, switchSernum[i]);
    delay(1);
  }

  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(100);

}
