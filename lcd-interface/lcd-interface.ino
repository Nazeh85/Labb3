#include <LiquidCrystal.h>

// Skapar ett LiquidCrystal-objekt med stiftkonfigurationen för LCD-skärmen
LiquidCrystal lcd(12, 11, 10, 9, 8, 7);

// Definierar stift för olika knappar och lysdioder
const int btnToss = 2;
const int btnTailsHeads = 3;
const int btnIncBet = 0;
const int btnDecBet = 1;
const int btnReset = 6;
const int btnExit = 13;
const int btnStartGame = 6; // OBS: Samma stift för btnReset och btnStartGame

const int ledWin = 4;
const int ledLoss = 5;

// Variabler för spelstatus och pengar
int money = 100;
int wins = 0;
int losses = 0;
int bet = 10;
String headsOrTail = "";
char choice = '\0';

// Booleans för knapptryckning och spelstatus
bool decreaseBtnPressed = false;
bool gameOver = false;
bool nameEntered = false;
String playerName = "";

// En array som innehåller bokstäver och siffror för att användas vid inmatning av spelarens namn
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

int currentCharIndex = 0;