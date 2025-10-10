#include<iostream>

int f(int n, int fact) {
  if(n <= 1) return fact;
  return f(n-1, fact*n);
}

int f2(int n) {
  if(n == 0) return 1;
  return n*f2(n-1);
}

int main (int argc, char *argv[]) {
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  int fact = 1;
  std::cout << f(n, fact) << std::endl;

  std::cout << f2(n) << std::endl;
  return 0;
}
