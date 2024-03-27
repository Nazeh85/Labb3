void displayMoney(int amount) {
  // Visa mängden pengar på LCD-skärmen
  lcd.setCursor(7, 0);
  lcd.print("    ");
  lcd.setCursor(7, 0);
  lcd.print(amount);
}

void displayBet(int amount) {
  // Visa insatsen på LCD-skärmen
  lcd.setCursor(5, 1);
  lcd.print("    ");
  lcd.setCursor(5, 1);
  lcd.print(amount);
}