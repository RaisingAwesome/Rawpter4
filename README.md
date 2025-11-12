# Rawpter4
Rawpter 4 is a Drone Flight Controller PCB built on the RA4M1 and ESP32-S3 and programmed by the Arduino IDE. However, this board package can be used for any RA4M1 design.

Tested on Windows 11 Arduino 2.3.6 only.

Note: you must install the [Renesas Flash Programmer](https://www.renesas.com/en/software-tool/renesas-flash-programmer-programming-gui) and add it's directory to your environment path so that rfp-cli.exe may be executed when uploading the sketch.

Connect a USB-to-Serial device between your computer and your board.  Be sure they share a common ground.

You board design needs to have the following RA4M1 pins available for hookup:
* P109: Tx
* P110: Rx
* P201: MD (Mode Select - normally pulled high and taken low before reset to select programming mode)
* PinRES: (normally pulled high and taken low to reset after pulling MD low)
* GND: Any pin that shares ground with the chip

