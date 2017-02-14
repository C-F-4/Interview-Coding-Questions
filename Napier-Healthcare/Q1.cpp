/*
 * String Encoding
 * Input: aaaabbcccsss
 * Output: a4b2c3s3
 */
 
#include <iostream>
#include <sstream>

std::string StrEncode(std::string str_to_encode) {
  std::stringstream ss;
  for(int i = 0; str_to_encode[i]; i++) {
    int ct = 0;
    ss << str_to_encode[i];
    while(str_to_encode[i] == str_to_encode[i+1]) {
      i++;
      ct++;
    }
    ss << ct;
  }
  return ss.str();
}

int main(void) {
  std::string str;
  cin >> str;
  cout << str_encode(str) << endl;
}
