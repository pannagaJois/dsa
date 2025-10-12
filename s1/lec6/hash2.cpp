#include<iostream>
#include<string>

void hash(std::string s, int l, int * q) {
  for (int i = 0; i < l; i++)
    q[s[i] - 97]++;
}

int main (int argc, char *argv[]) {
  std::string s = "hifgoihwqoihnclaskfj";
  int q[26] = {};
  hash(s, s.length(), &q[0]);
  for (int i = 0; i < 26; i++)
    std::cout << char(i+97) << " : " << q[i] << std::endl;
  return 0;
}
