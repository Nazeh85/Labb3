void displayMoney(int amount) {
  // Visa mängden pengar på LCD-skärmen
  lcd.setCursor(7, 0);
  lcd.print("    ");
  lcd.setCursor(7, 0);
  lcd.print(amount);
}