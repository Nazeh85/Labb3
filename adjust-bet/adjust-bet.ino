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
  } else {
    if (*currentBet - 10 >= 10) {
      *currentBet -= 10;
    } else {
      // Visa felmeddelande om försök att minska insatsen när den redan är på det lägsta värdet
lcd.clear();
lcd.print("Minimum reached");
delay(2000);
}
}
}