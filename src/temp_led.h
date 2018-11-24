class TempLed {
  public:
    int pin;
    int temp;

    TempLed(int p, int t);
    bool shouldTurnOnWith(int extTemp);
} ;
