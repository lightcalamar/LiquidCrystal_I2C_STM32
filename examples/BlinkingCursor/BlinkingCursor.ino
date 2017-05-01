/*
 * 
 *  Librería LCDLiquid_I2C_STM32 modificada para prosesadores 
 *  STM32F103
 *  
 *  Enlace de la librería original; 
 *  https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library
 *  
 *  Modificada 1, Mayo de 2017 por lightcalamar;
 *  https://github.com/lightcalamar
 *  
 */


#include <Wire.h> 
#include <LiquidCrystal_I2C_STM32.h>

LiquidCrystal_I2C_STM32 lcd(0x27, 20, 4);

void setup()
{
	// initialize the LCD
	lcd.begin();
	lcd.setCursor(4, 0);
  lcd.print("Iniciando...");
     delay(1000);  
  lcd.setCursor(0, 2);
  lcd.print("    Lightcalamar");
  lcd.setCursor(0, 3);
  lcd.print(" Demo STM32F103C8T6 ");     
     delay(3000);
      
}

void loop()  {
	bool blinking = true;
	lcd.cursor();

	while (1) {
		if (blinking) {
			lcd.clear();
			lcd.print("No cursor blink");
			lcd.noBlink();
			blinking = false;
		} else {
			lcd.clear();
			lcd.print("Cursor blink");
			lcd.blink();
			blinking = true;
		}
  	delay(1000);
	}
}
