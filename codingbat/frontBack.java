public String frontBack(String str) {
  if (str.isEmpty()){
    return str;
  } else {
  String newStr = new String();
  char[] ch = str.toCharArray();
  
  char temp = ch[0];
  ch[0] = ch[str.length()-1];
  ch[str.length()-1] = temp;
  
  for (char a:ch) {
    newStr += a;
  }
  
  return newStr;
    
  }
}