#include<iostream>
int c = 0;

void f(int c) {
  if(c==5) return;
  std::cout << c << std::endl;
  c++;
  f(c);
}
int main (int argc, char *argv[]) {
  f(c);
  return 0;
}
