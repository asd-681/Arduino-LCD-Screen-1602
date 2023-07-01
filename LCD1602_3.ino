#include <LiquidCrystal.h>

// Создаем константы контактов для подключения к ардуино. 
const int RS = 4, EN = 5, D4 = 10, D5 = 11, D6 = 12, D7 = 13;

String hello_str = "Hello World!";
String goodbye_str = "Goodbye see you again!!!";

// Инициализируем объект-экран. 
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  lcd.begin(16,2);
}

void loop() {
  // Устанавливаем курсор в позицию (0, 0)
  lcd.setCursor(0, 0);
  // Итерируемся по строке hello_str
  for (int i = 0; i < hello_str.length(); i++) {
    lcd.print(hello_str.charAt(i));
    delay(500);
  }

  // Устанавливаем курсор в (16, 1)
  lcd.setCursor(14, 1);
  // Включаем автоматичсекую прокрутку (все символы автоматически сдвигаются влево)
  lcd.autoscroll();
  // Итерируемся по строке goodbye_str
  for (int i = 0; i < goodbye_str.length(); i++){
    lcd.print(goodbye_str.charAt(i));
    delay(500);
  }
  
  delay(300);
  // Выключаем автоматическую прокрутку 
  lcd.noAutoscroll();
  
  // Очищаем экран для следующей итерации
  lcd.clear();
}
