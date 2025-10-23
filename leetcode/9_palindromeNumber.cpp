#include<iostream>
#include<algorithm>
#include<string>
#include<climits>

bool isPalindrome1(int x) {
  std::string s = std::to_string(x);
  std::string r = s;
  std::reverse(s.begin(), s.end()); 
  if(r == s) return true;
  return false;
}

bool isPalindrome2(int x) {
  int n = x;
  int r = 0;
  while(n > 0) {
    if((INT_MAX/10)-(n%10) < r)
      return false;
    r = r*10;
    r = r + n%10;
    n = n/10;
  }
  if(x==r) return true;
  return false;
}

int main() {
  int n;
  std::cout << "enter a number: ";
  std::cin >> n;

  if(isPalindrome2(n))
    std::cout << "palindrome" << std::endl;
  else
    std::cout << "not palindrome" << std::endl; 
  return 0;
}

