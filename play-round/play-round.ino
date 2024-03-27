void playRound(char *choice) {
lcd.clear(); // Rensa LCD-skärmen
lcd.print("Tossin' coin."); // Skriv ut "Tossin' coin." på LCD-skärmen
delay(300); // Vänta i 300 millisekunder
lcd.clear();
lcd.print("Tossin' coin .");
delay(300);
lcd.clear();
lcd.print("Tossin' coin  .");
delay(300);
lcd.clear();
lcd.print("Tossin' coin  .");
delay(300);
lcd.clear();
lcd.print("Tossin' coin . ");
delay(300);
lcd.clear();
lcd.print("Tossin' coin. ");
delay(300);
lcd.clear();

// Slumpmässigt generera ett nummer för myntkastet (0 eller 1)
int coinFlip = random(2);

// Utför vinst- eller förlustkontroll baserat på spelarens val och myntkastet
if ((coinFlip == 0 && strcmp(choice, "h") == 0) || (coinFlip == 1 && strcmp(choice, "t") == 0)) {
// Om spelaren vinner: öka pengarna, öka antalet vinster, tänd lysdioden för vinst, visa "YOU WON" och pengarna, vänta 2 sekunder
money += bet;
wins++;
digitalWrite(ledWin, HIGH);
delay(1000);
digitalWrite(ledWin, LOW);
displayMessage(" YOU WON ");
displayMoney(bet);
lcd.print(" $");
}