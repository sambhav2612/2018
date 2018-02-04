public boolean startHi(String str) {
  String[] newStr = str.split(" ");
  if (newStr[0].equals("hi")) {
    return true;
  }
  return false;
}