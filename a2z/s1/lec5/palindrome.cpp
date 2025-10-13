#include<iostream>
#include<string>

bool pal(std::string s, int start, int end) {
  if(start > end) return true;
  if(s[start] != s[end]) 
    return false;
  return pal(s, start+1, end-1);
}
int main (int argc, char *argv[]) {
  std::string s;
  std::cout << "Enter a string: ";
  std::cin >> s;

  if(pal(s, 0, s.length()-1)) 
      std::cout << "palindrome" << std::endl;
  else 
    std::cout << "not a palindrome" << std::endl;

  return 0;
}
