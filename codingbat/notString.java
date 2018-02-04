public String notString(String str) {
  
  String[] newStr = str.split(" ");
  if (newStr[0].equals("not")) {
    return str;
  } else {
    return "not " + str;
  }
}
