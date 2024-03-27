
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