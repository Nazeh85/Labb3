void displayStatus() {
// Visa spelstatus (pengar och insats) och aktuell sida på LCD-skärmen
lcd.print("MONEY: ");
lcd.print(money);
lcd.print("$");
lcd.setCursor(0, 1);
lcd.print("BET: ");
lcd.print(bet);
lcd.print("$");
lcd.print(" " + headsOrTail);
}

void displayMessage(const char *message) {
// Rensa skärmen, visa spelstatus och meddelandet på LCD-skärmen
lcd.clear();
displayStatus();
lcd.setCursor(0, 1);
lcd.print(message);
}