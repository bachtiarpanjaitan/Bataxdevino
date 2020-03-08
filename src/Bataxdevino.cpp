#include "Bataxdevino.h"
#include <LiquidCrystal.h>
void Bataxdevino::lcdPrint(LiquidCrystal lcd,int row, int col, char* msg, bool clear = false){
	if(clear == true) lcd.clear();
	lcd.setCursor(col,row);
  	lcd.print(msg);
}	
