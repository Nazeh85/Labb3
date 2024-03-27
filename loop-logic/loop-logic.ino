
void loop() {
  // Om spelet är över, avsluta spelet
  if (gameOver) {
    exitGame();
    return;
  }

  // Om spelarens namn inte har angetts, få spelarens namn
  if (!nameEntered) {
    getPlayerName();
    return;
  }

  // Om pengarna är slut, sätt spelet till slutet
  if (money <= 0) {
    gameOver = true;
    return;
  }

  // Visa meddelandet "BET: "
  displayMessage("BET: ");

   // Loopa tills en knapp trycks ned
  while (true) {
    if (digitalRead(btnIncBet) == LOW) {
      // Om knappen för att öka insatsen trycks ned
      // Öka insatsen med 10, visa den nya insatsen och vänta 100 ms
      adjustBet(&bet, money, true);
      displayBet(bet);
      delay(100);
      break;
    } else if (digitalRead(btnDecBet) == LOW && !decreaseBtnPressed) {
      // Om knappen för att minska insatsen trycks ned och inte tryckts ned tidigare
      // Minska insatsen med 10 (om insatsen är större än 10), visa den nya insatsen och vänta 100 ms
      adjustBet(&bet, money, false);
      displayBet(bet);
      decreaseBtnPressed = true;
      delay(100);
      break;
    } else if (digitalRead(btnToss) == LOW) {
      // Om knappen för att kasta mynt trycks ned
      // Om valet inte är tomt, spela omgången
      // Annars visa ett meddelande om att välja sida och vänta 1 sekund
      if (choice != '\0') {
        playRound(&choice);
      } else {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("CHOOSE A SIDE");
        lcd.setCursor(0, 1);
        lcd.print("HEADS OR TAILS?!");
        delay(1000);
      }
      break;
    } else if (digitalRead(btnTailsHeads) == LOW) {
      // Om knappen för att välja sida trycks ned
      // Byt mellan "HEADS" och "TAILS", spara valet och vänta 100 ms
      headsOrTail = headsOrTail == "TAILS" ? "HEADS" : "TAILS";
      delay(100);
      choice = headsOrTail == "TAILS" ? 't' : 'h';
      delay(100);
      break;
    } else if (digitalRead(btnReset) == LOW) {
      // Om knappen för att återställa spelet trycks ned
      // Återställ spelet och bryt loopen och kastar dig tillbaka till default pengar men samma spelare.
      resetGame();
      break;
    } else if (digitalRead(btnExit) == LOW) {
      // Om knappen för att avsluta spelet trycks ned
      // Omvänd spelets status och bryt loopen och kastar dig tillbaka till namngivning av nyspelare.
      gameOver = !gameOver;
      break;
    }
  }
  // Återställ decreaseBtnPressed till falskt
  decreaseBtnPressed = false;
}