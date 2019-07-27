 
#include<AT89X52.h>         //header file
#define RS P0_7             //registe select pin
#define RW P0_6             //read/write pin
#define EN P0_5             //enable pin
void delay();               //delay function
void com(char );            //to send command to LCD
void dat(char );            //to send data to LCD
void print(char );          //our function to print the name.
void main()
{
	while(1)              
	{ 
		char text[]="KRYPTON";
		int i,n=0;
		com(0x0c);              // display on cursor off
		com(0x01);              //clr scr
		while(text[i]!='\0')    //continue to print till we get the null character
		{
      /* this block is intentionally commented. this is to be used when we have to print more than 16 characters
			if(i>15)
			{
				com(0x1c);          //shift display left
				com(0x0c);
			}
      */
      
			print(text[i]);
			i++;
		}
		while(9);
	}
}
void print(char c)
{
	com(0x06);                // shift cursor to right >>>>>>
	dat(c);                   // pass the character to LCD
}
void delay()
{
	short int i;
	for(i=0;i<=255;i++);
}
void com(char m)
{
	P2=m;
	RS=0;
	RW=0;
	EN=1;
	delay();
	EN=0;
	delay();
}
void dat(char m)
{
	P2=m;
	RS=1;
	RW=0;
	EN=1;
	EN=0;
	delay();
}
