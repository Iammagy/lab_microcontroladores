#include <pic14/pic12f675.h>

typedef unsigned int word ;
word __at 0x2007 __CONFIG = (_WDTE_OFF);

int random_number(void);

void main(void)
{

    int number = random_number();

    TRISIO = 0b00000000; //pins as outputs except IO3 
	GPIO = 0x00; //leds off initially (0V)
    
	//ANSEL = 0b00000001;// Usa el gp0 como analogico
    
    //int delay_time;

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

int random_number(void){
    return 5;
}