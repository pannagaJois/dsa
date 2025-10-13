#include<iostream>
#include<cmath>

int main (int argc, char *argv[]) {
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  
  // optimal approach
  int c1 = (int)(log10(n)+1);
  std::cout << "Number of digits are: " << c1 << std::endl;
  
  int c = 0;
  while(n != 0) {
    n /= 10;
    c++;
  }
  
  std::cout << "Number of digits are: " << c << std::endl;
  return 0;
} 
