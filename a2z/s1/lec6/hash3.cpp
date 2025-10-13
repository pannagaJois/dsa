// for all chars

#include<iostream>
#include<string>

void hash(std::string s, int l, int *q) {
  for (int i = 0; i < l; i++)
    q[int(s[i])]++;
}

int main (int argc, char *argv[]) {
  std::string s;
  std::cout << "enter a string: ";
  std::getline(std::cin, s);
  int q[128] = {}; // for standard ascii table
  hash(s, s.length(), &q[0]);
  for (int i = 0; i < 128; i++)
    std::cout << char(i) << " : " << q[i] << std::endl;
  return 0;
}
