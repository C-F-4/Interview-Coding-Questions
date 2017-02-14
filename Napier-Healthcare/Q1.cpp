/*
 * String Encoding
 * Input: aaaabbcccsss
 * Output: a4b2c3s3
 */
 
#include <iostream>
#include <sstreams>

using namespace std;

string str_encode(string str) {
  stringstream ss;
  return ss.tostr();
}

int main(void) {
  string str;
  cin >> str;
  cout << str_encode(str) << endl;
}
