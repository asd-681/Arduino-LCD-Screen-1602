#include <LiquidCrystal.h>

// Создаем константы контактов для подключения к ардуино. 
const int RS = 4, EN = 5, D4 = 10, D5 = 11, D6 = 12, D7 = 13;


// Инициализируем объект-экран. 
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  lcd.begin(16,2);
}

void loop() {
  // Устанавливаем курсор в позицию (0, 0)
  lcd.setCursor(0, 0);
  // Выводим цифры от 0 до 9
  for (int thisChar = 0; thisChar < 10; thisChar++) {
    lcd.print(thisChar);
    delay(500);
  }

  // Устанавливаем курсор в (16, 1)
  lcd.setCursor(14, 1);
  // Включаем автоматичсекую прокрутку (все символы автоматически сдвигаются влево)
  lcd.autoscroll();
  // Печатаем от 0 до 9
  for (int thisChar = 0; thisChar < 10; thisChar++){
    lcd.print(thisChar);
    delay(500);
  }
  // Выключаем автоматическую прокрутку 
  lcd.noAutoscroll();
  
  // Очищаем экран для следующей итерации
  lcd.clear();
}
