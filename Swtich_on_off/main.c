#include<reg51.h>   // 8051 header file 
sbit LED=P2^0;      // assigned macro "LED" to pin P2.0
sbit SW=P1^0;                // assigned macro "SW"  to pin P1.0

void main()
{
    LED=0;          // making LED output pin
    SW=1;           // making SW as Input pin
    while(1)        // infinite loop
        {
            LED=~SW;    // If switch Open LED off, else LED ON(invert status of Switch to LED)
        }
}