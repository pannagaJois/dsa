#include<iostream>

void f(int i, int n) {
  if(i>n) return;
  std::cout << n-i << "\t";
  f(i+1, n);
}
//or 
void f2(int i, int n) {
  if(i<0) return;
  std::cout << i << "\t";
  f2(i-1, n);
}

int main (int argc, char *argv[]) {
  int n;
  std::cout << "enter a number: ";
  std::cin >> n;
  f(0, n);
  std::cout << std::endl;
  f2(n,n);
  std::cout << std::endl;
  return 0;
}
