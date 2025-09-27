#include<iostream>

int main (int argc, char *argv[]) {
  int n=4;
  for (int i = 0; i < n; i++) {
    for(int j=0; j<=i; j++)
      std::cout << j+1;
    for(int k=0; k<(n-i-1)*2; k++)
      std::cout << " ";
    for(int l=0; l<=i; l++)
      std::cout << i+1-l;
    std::cout << std::endl;
  }
  return 0;
}
