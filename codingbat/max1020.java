public int max1020(int a, int b) {
  if ((a >= 10 && a <= 20) || (b >= 10 && b <= 20)) {
    if (b >= 10 && b <= 20) {
      if (a >= b && (a >= 10 && a <= 20)) {
        return a;
      } else {
        return b;
      }
    }
    return a;
  }
  return 0;
}