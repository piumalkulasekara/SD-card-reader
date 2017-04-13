#include <SimpleSDAudio.h>

void setup()
{ 
  // If your SD card CS-Pin is not at Pin 4, enable and adapt the following line:
  // SdPlay.setSDCSPin(10);
  
  // Init SdPlay and set audio mode and activate autoworker
  if (!SdPlay.init(SSDA_MODE_FULLRATE | SSDA_MODE_MONO | SSDA_MODE_AUTOWORKER)) {
    while(1); // Error while initialization of SD card -> stop.
  } 
  
  // Select file to play
  if(!SdPlay.setFile("music2.AFM")) {
    while(1); // Error file not found -> stop.
  }   
}

void loop(void) {
  // Start playback
  SdPlay.play();
  
  // Optional: Wait until playback is finished
  while(!SdPlay.isStopped()) {
	; // no SdPlay.worker() required anymore :-)
  }
}