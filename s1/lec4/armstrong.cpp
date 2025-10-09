#include<iostream>
#include<cmath>

bool arm(int n) {
  // find total no of digits
  int d = (int)log10(n)+1;
  // find the sum of each digits raised to digit number
  int sum = 0, a=n;
  while (a != 0) {
    sum += std::pow(a%10, d);
    a /= 10;
  }
  if(n == sum)
    return true;
  else
    return false;
}

int main (int argc, char *argv[]) {
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  if(arm(n))
    std::cout << "armstrong" << std::endl;
  else
    std::cout << "not armstrong" << std::endl;
 return 0;
}
