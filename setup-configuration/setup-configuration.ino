void setup() {
  // Sätter stiftlägen för knappar, lysdioder och LCD-skärmen
  pinMode(btnToss, INPUT_PULLUP);
  pinMode(btnTailsHeads, INPUT_PULLUP);
  pinMode(btnIncBet, INPUT_PULLUP);
  pinMode(btnDecBet, INPUT_PULLUP);
  pinMode(btnReset, INPUT_PULLUP);
  pinMode(btnExit, INPUT_PULLUP);
  pinMode(ledWin, OUTPUT);
  pinMode(ledLoss, OUTPUT);