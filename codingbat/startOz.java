public String startOz(String str) {
  if (str.isEmpty()) {
    return ""; 
  }
  if (str.length() >= 2) {
    if (str.substring(0,2).equals("oz")) {
      return str.substring(0,2);
    }
  }
  if (str.substring(0,1).equals("o")) {
    return str.substring(0,1);
  }
  if (str.substring(1,2).equals("z")) {
    return str.substring(1,2);
  }
  return ""; //default
}