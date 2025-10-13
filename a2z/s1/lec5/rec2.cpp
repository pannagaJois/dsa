#include<iostream>

void f(int i, int n) {
  if(i>n) return;
  std::cout << "Hello" <<std::endl;
  f(i+1, n);
}
int main (int argc, char *argv[]) {
  std::cout<<"Enter a number: ";
  int n;
  std::cin>>n;
  f(1, n);
  return 0;
}
