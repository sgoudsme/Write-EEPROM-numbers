# Write-EEPROM-numbers

This little piece of software is the basic for every new arduino in all my projects. I base all my MQTT topics on this serial number. When I need more arduino's doing practically the same, I can now flash the same software on every arduino without the need of changing the serial number every time. 

The number is made of 5 characters, where typically it alwasy start with a 'D' from "Device". I create the number randomly when I first use the arduino. 

Just fill in the serial number you want in the code and upload. When the leds blinks fast, the real software can be overwritten.
