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

void restartGame() {
// Återställ alla spelvariabler till startvärden
money = 100;
wins = 0;
losses = 0;
bet = 10;
headsOrTail = "";
choice = '\0';
gameOver = false;
nameEntered = false;
playerName = "";

// Rensa LCD-skärmen och börja om processen för att få spelarens namn
lcd.clear();
getPlayerName();
}

void resetGame() {
// Visa ett meddelande om att spelet återställs och att det kan spelas igen, vänta 2 sekunder
lcd.setCursor(0, 0);
lcd.print("GAME RESETS");
lcd.setCursor(0, 1);
lcd.print("PLAY AGAIN!");
delay(2000);

// Återställ alla spelvariabler till startvärden, rensa LCD-skärmen och visa spelstatus
money = 100;
wins = 0;
losses = 0;
bet = 10;
headsOrTail = "";
choice = '\0';
gameOver = false;
lcd.clear();
displayStatus();
}