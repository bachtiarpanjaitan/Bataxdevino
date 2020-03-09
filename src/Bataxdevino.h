#include <LiquidCrystal.h>

class Bataxdevino{
	public :
		//Bataxdevino(int serial = 9600);
		void lcdPrint(LiquidCrystal lcd,int row,int col,char* msg,bool clear = false);
		int readLcdButton(int pin);
		char* intToChar(int value, int base = 10);
		
	private :
		char buffer[10];
};
