/**
 * Adds one hour
 */
void addOneHour() {
    int currentHour = getHour();
  
    if (currentHour >= 0 && currentHour <= 22) {
      currentHour += 1;
      setHour(currentHour);
    }
    else {
      setHour(0);
    }
  
    // nothing to return, just setHour to the appropriate value
  }