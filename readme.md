**How to use it ?**
- Import Bataxdevino library on your .ino file 
```
#include <Bataxdevino.h>
```
- Create a new variable of Bataxdevino library

```
Bataxdevino btx;
```
- Then use it

**Available Method**
1. Show text on LCD screen 16*2
  
```
  //import Library LiquidCrystal first
  LiquidCrystal lcd (RS,EN,d4,d5,d6,d7);
  ...
  lcd.begin(16,2);
  btx.lcdPrint(lcd,0,0,"your text here",true);
  ...
```
2. Read LCD Button 16*2

```
 //first initialize LCD
 const int buttonPin = 0;
 lcd.begin(16,2);

 btx.readLcdButton(buttonPin);
```

3. Convert Int into Char
For special case, sometime you need convert an integer value into char and then you can use it.

```
char yourChar[3];
yourChar = btx.intToChar(yourIntegerValue)
```
