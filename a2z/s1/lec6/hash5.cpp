// hashing using maps - for chars

#include<iostream>
#include<map>
#include<string>

int main (int argc, char *argv[]) {
  std::cout << "enter a string: ";
  std::string s;
  std::getline(std::cin, s);

  std::map<char, int> m;

  for (int i = 0; i < s.length(); i++)
    m[s[i]]++;

  for(auto it : m)
    std::cout << it.first << " : " << it.second << std::endl;
  return 0;
}
// use unordered_map most of the time as it is O(1) on most cases
