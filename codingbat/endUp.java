public String endUp(String str) {
  if (str.length() < 3) {
    return str.toUpperCase();
  } 
  
  return str.substring(0, str.length()-3) + str.toUpperCase().substring(str.length()-3);
}