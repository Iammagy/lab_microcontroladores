#include <pic14/pic12f675.h>

int random_number(void);

void main(void)
{

    int number = random_number();

    TRISIO = 0b00000000; //pins as outputs except IO3
	GPIO = 0x00; //leds off initially (0V)
    
    TRISIO1	= 1; /* Use GP1 as input */
	ANSEL = 0;
	ANS0  = 1; /* Use AN3(GP0) as analog input */
	CHS1  = 1, CHS0 = 1; /* Use ch.3 (AN3) */
    
    int delay_time;

    while (1)
    {

    }
}

int random_number(void){
    return 6;
}