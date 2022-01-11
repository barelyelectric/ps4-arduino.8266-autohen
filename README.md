One script sends the correct sequence of infrared signals to a tv using the HDMI-CEC protocol to initiate a PS4 exploit. The other script uses an Arduino Pro Micro to emulate a keyboard and send the appropriate keystrokes to the PS4 with the same goal. After the script has run, stooged's auto usb loader takes over and completes the process.

The first one requires the IRLib2 library to compile:
https://github.com/cyborg5/IRLib2

Circuit diagram and how to send IR codes with Arduino over at Adafruit:
https://learn.adafruit.com/using-an-infrared-library/sending-ir-codes

Huge thanks to stooged for a simplified and auto-loading index.html to go with https://github.com/stooged/PS4-Server-900u
