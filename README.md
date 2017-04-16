# SD-card-reader
## This Repo basically contains all the libraries and codes I've been used foe LEO

Here is the link to the original library:
https://github.com/isramos/mico-shield/blob/master/libraries/SimpleSDAudio/


### |Pin-Mappings:|                              


|PLATTFORM                             |SD_CS| MOSI| MISO| SCK| SS |PWM1| PWM2| Ocx1| Ocx2|
|--------------------------------------|-----|-----|-----|----|----|----|-----|-----|-----|
|mega368P         (standard Arduinos)  |  4  | 11  | 12  | 13 | 10 | 9  | 10**| 1A  | 1B  |
| mega1280, mega2560 (mega Arduinos)   | 4   | 51  | 50  | 52 | 53 | 44 | 45  | 5C  |5B   | 
|mega644 (Sanguino)                    |4    |5    |6    |7   |4   |13  |12   |1A   |1B   |
| mega32U4 (Teensy 2.0)                |0    |2    |3    |1   |0   |14  |15   |1A   |1B   |
| mega32U4 (Leonardo)                  |0    |na   |na   |na  |na  |9*  | 10*  |1A  |1B   |


 *change manual to output mode or change in SimpleSDAudio.h 
 > ** may collide with eth-shield cs-pin. Move eth-cs-pin or use only mono mode
 

![capture](https://cloud.githubusercontent.com/assets/25324590/25070397/9c39df98-22ba-11e7-8029-e290e534c421.JPG)

