void configb() {
  t1 = millis();
  while (count >= 2) {
    if (timee < 2000) {
      pathFinder();
    }
    else if (timee > 2000 && timee < 3000) {
      right();
    }
    else {
      parking();
    }
    t2 = millis();
    timee =  t2 - t1;
  }
}
