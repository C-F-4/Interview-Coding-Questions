/*
 * String Encoding - Encode a given string such that all the repeated characters are removed and replaced by a integer 
 *   which is the count of the repeated characters as shown in the below test case
 * Input: aaaabbcccssse
 * Output: a4b2c3s3e
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
    if(ct != 0)
      ss << ct+1;
  }
  return ss.str();
}

int main(void) {
  std::string str;
  std::getline(std::cin, str);
  std::cout << StrEncode(str) << std::endl;
}
