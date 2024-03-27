void exitGame() {
// Visa "GAME OVER" och spelarens totala pengar, vänta 3 sekunder
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("GAME OVER");

// Beräkna och visa det totala resultatet (pengarna jämfört med startbeloppet)
int result = money - 100;

lcd.setCursor(0, 1);
lcd.print(playerName);
lcd.print("'s MONEY:");
lcd.print(money);
lcd.print("$");

delay(3000);

// Återstarta spelet
restartGame();
}