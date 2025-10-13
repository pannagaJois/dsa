#include<iostream>

void f(int i, int n) {
  if(i>n) return;
  std::cout << i << std::endl;
  f(i+1, n);
}

int main (int argc, char *argv[]) {
  int n;
  std::cout << "enter a number: ";
  std::cin >> n;
  f(0, n);
  return 0;
}
