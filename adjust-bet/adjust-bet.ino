void adjustBet(int *currentBet, int currentMoney, bool increase) {
  // Justera insatsen beroende på om det är en ökning eller minskning och visa den nya insatsen
  if (increase) {
    if (*currentBet + 10 <= currentMoney) {
      *currentBet += 10;
    } else {
      // Visa felmeddelande om försök att öka insatsen mer än pengarna
      lcd.clear();
      lcd.print("Maximum reached");
      delay(2000);
    }
  }