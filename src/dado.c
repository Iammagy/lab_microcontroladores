#include <pic14/pic12f675.h>

typedef unsigned int word ;
word __at 0x2007 __CONFIG = (_WDTE_OFF);

unsigned int random_noise(void);

void main(void)
{

    unsigned int number = random_noise();

	GPIO = 0x00; //leds off initially (0V)

    while (1)
    {
        switch (number)
        {
        case 1:
        GPIO = 0b00000001;
        break;

        case 2:
        GPIO = 0b00000010;
        break;

        case 3:
        GPIO = 0b00000011;
        break;

        case 4:
        GPIO = 0b00100010;
        break;

        case 5:
        GPIO = 0b00100011;
        break;

        case 6:
        GPIO = 0b00100110;
        break;

        default: 
            GPIO = 0x00;
        }   
    }
}



unsigned int random_noise(void){

    TRISIO = 0b00010000; //set pin 4 as input
	ANSEL = 0b01111000; // pin 4 as analog

    ADCON0 = 0b10001101; // VCFG= VDD
                        // channel = ANS3 (11)
                        //ADFM = 1 (Right justified)
                        //ADON =1 (star convertion)

    GO_DONE = 1; //stars convertion 

    while(GO_DONE == 1){
        continue;
    }

    unsigned int result = (ADRESH<<8) | ADRESL; //result is a 

    unsigned int random_number = (result % 6) +1;  //module 6 of any number is a number between 0 to 5, so we sum 1

    return random_number;

}
