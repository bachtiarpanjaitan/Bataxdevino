#include "Bataxdevino.h"
#include <LiquidCrystal.h>
#include <Arduino.h>
void Bataxdevino::lcdPrint(LiquidCrystal lcd,int row, int col, char* msg, bool clear = false)
{
	if(clear == true) lcd.clear();
	lcd.setCursor(col,row);
  	lcd.print(msg);
}

/**
 * @param pin read analog pin button
 **/
int Bataxdevino::readLcdButton(int pin)
{
	int result;
	int x;
	x = analogRead(pin);
	if(x<60){         //right
		result = 0;
	}else if(x<200){  //up
		result = 1;
	}else if(x<400){  //down
		result = 2;
	}else if(x<600){  //left
		result = 3;
	}else if(x<800){  //select
		result = 4;
	}
	return(result);
}

