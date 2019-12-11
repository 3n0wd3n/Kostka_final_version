#include "settings.h"
#include "macros.h"
#include <stdbool.h>
#include <avr/io.h>
#include <util/delay.h>
/*
    int main(void)
{
    //PORT pd JE VYSTUPNI
    DDRD |= (1 << PD0);
    DDRD |= (1 << PD1);
    DDRD |= (1 << PD2);
    DDRD |= (1 << PD3);
    DDRD |= (1 << PD4);
    DDRD |= (1 << PD5);
    DDRD |= (1 << PD6);
    //pin pb7 je vstupni a pull-up rezistorem
    PORTB |= (1<<PB7);

    while (1) {
        
        //PORTD = 0xFF;
        //_delay_ms(250);
        //PORTD = 0x00;
        //_delay_ms(250);
        PORTD = 0b00000000;
        _delay_ms(500);
    }

    return 0;
}                        /* main */


int main(void) {
PORTB |= (1 << PB7);

DDRD |= (1 << PD0);
DDRD |= (1 << PD1);
DDRD |= (1 << PD2);
DDRD |= (1 << PD3);
DDRD |= (1 << PD4);
DDRD |= (1 << PD5);
DDRD |= (1 << PD6);

while (1){
    while(((PINB & (1 << 7)))) {
    switch(rand()%7)
    {
    case 1:
    PORTD = 0b0111111;
        break;
    case 2:
    PORTD = 0b01110110;
        break;
    case 3:
    PORTD = 0b00110110;
        break;
    case 4:
    PORTD = 0b00101010;
        break;
    case 5:
    PORTD = 0b00100010;
        break;
    case 6:
    PORTD = 0b01000000;
        break;
    }
    _delay_ms(500);
    }
}
}
