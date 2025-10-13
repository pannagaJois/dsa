#include<iostream>

int main (int argc, char *argv[]) {
  int n=4;

  for (int i = 0; i < 2*n-1; i++) {
    for (int j = 0; j < 2*n-1; j++) {
      int top = i;
      int bottom = (2*n-1)-i-1;
      int left= j;
      int right=(2*n-1)-j-1;
      std::cout <<n-( std::min(std::min(top,bottom), std::min(left,right)));
    }
    std::cout << std::endl;
  }
  return 0;
}
