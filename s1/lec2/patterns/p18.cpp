#include<iostream>
int main (int argc, char *argv[]) {
  int n=5;
  for (int i = 0; i < n; i++) {
    for(int j=0; j<=i; j++) {
      char a='E';
      a=a-i+j;
      std::cout <<" "<<a;
    }
    std::cout << std::endl;
  }
  return 0;
}
