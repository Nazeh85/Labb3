void getPlayerName() {
// Visa ett meddelande för att ange spelarens namn på LCD-skärmen
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("ENTER YOUR NAME:");
lcd.setCursor(0, 1); 

// Loopa tills spelaren har angett sitt namn och startknappen trycks ned
while (!nameEntered) {
if (digitalRead(btnToss) == LOW) {
// Om kastknappen trycks ned, lägg till nästa tecken från alfabetet till spelarens namn och visa det, vänta 200 ms
playerName += alphabet[currentCharIndex];
lcd.print(alphabet[currentCharIndex]);
delay(200); // Debounce
while (digitalRead(btnToss) == LOW) {} // Vänta tills knappen släpps
} else if (digitalRead(btnStartGame) == LOW) {
// Om startknappen trycks ned, kontrollera om spelaren har angett ett namn
if (playerName.length() > 0) {
// Om ett namn har angetts, sätt nameEntered till sant och visa välkomstmeddelande, vänta 2 sekunder
nameEntered = true;
lcd.clear();
lcd.print("WELCOME, ");
lcd.print(playerName);
delay(2000);
} else {
// Om inget namn har angetts, visa felmeddelande, vänta 1,5 sekunder och fortsätt loopen
lcd.clear();
lcd.print("NO NAME NO GAME:");
delay(1500);
lcd.clear();
lcd.print("ENTER YOUR NAME:");
lcd.setCursor(0, 1);
continue;
}
} else if (digitalRead(btnIncBet) == LOW) {
// Om knappen för att öka insatsen trycks ned, gå till nästa tecken i alfabetet och visa det, vänta 200 ms
currentCharIndex = (currentCharIndex + 1) % 36;
displayCurrentChar();
delay(200); // Debounce
while (digitalRead(btnIncBet) == LOW) {} // Väntatills knappen släpps
} else if (digitalRead(btnDecBet) == LOW) {
// Om knappen för att minska insatsen trycks ned, gå till föregående tecken i alfabetet och visa det, vänta 200 ms
currentCharIndex = (currentCharIndex - 1 + 36) % 36;
displayCurrentChar();
delay(200); // Debounce
while (digitalRead(btnDecBet) == LOW) {} // Vänta tills knappen släpps
}
}
}

void displayCurrentChar() {
// Rensa skärmen, visa meddelande om att ange spelarens namn och aktuellt namn med aktuell bokstav på LCD-skärmen
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("ENTER YOUR NAME:");
lcd.setCursor(0, 1);
lcd.print(playerName);
lcd.print(alphabet[currentCharIndex]);
}