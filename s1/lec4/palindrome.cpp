#include<iostream>

int rev(int n) {
  int r = 0;
  while(n != 0) {
    r = (r*10) + (n%10);
    n /= 10;
  }
  return r;
}

int main (int argc, char *argv[]) {
  int n;
  std::cout << "enter a number: ";
  std::cin >> n;
  
  if(n == rev(n))
    std::cout << "palindrome" << std::endl;
  else
    std::cout << "not a palindrome" << std::endl;
  return 0;
}
