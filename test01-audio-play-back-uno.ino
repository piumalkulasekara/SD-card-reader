/*
 SimpleSDAudio 
 
 Easily play audio files with Arduino from SD card in decent quality but 
 with very low external hardware.
 
 Visit our hackerspace website for more information: 
 http://www.hackerspace-ffm.de/wiki/index.php?title=SimpleSDAudio
 
 Pin-Mappings:
 =================================================================================
 PLATTFORM                             SD_CS MOSI MISO SCK SS  PWM1 PWM2 Ocx1 Ocx2
 mega368P         (standard Arduinos)  4     11   12   13  10  9    10** 1A   1B
 mega1280, mega2560 (mega Arduinos)    4     51   50   52  53  44   45   5C   5B
 mega644 (Sanguino)                    4     5    6    7   4   13   12   1A   1B
 mega32U4 (Teensy 2.0)                 0     2    3    1   0   14   15   1A   1B
 mega32U4 (Leonardo)                   0     na   na   na  na  9*   10*  1A   1B
 90USB646, 90USB1286 (Teensy++)        20    22   23   21  20  25   26   1A   1B

 *change manual to output mode or change in SimpleSDAudio.h 
 **may collide with eth-shield cs-pin. Move eth-cs-pin or use only mono mode
 */

#include <SimpleSDAudio.h>

void setup() {

SdPlay.setSDCSPin(10); // sd card cs pin

if (!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER))

{ 
  while(1); 
}

if(!SdPlay.setFile("music2.wav")) // music name file

{ 
  while(1);

}

}

void loop(void)

{

SdPlay.play(); // play music

while(!SdPlay.isStopped())

{

}
}
