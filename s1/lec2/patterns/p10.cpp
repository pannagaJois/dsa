#include<iostream>

int main (int argc, char *argv[]) {
  int n = 5;
  for (int i = 0; i < (2*n)-1; i++) {
    if(i<n)
      for(int j=0; j<=i; j++)
        std::cout<< "*";
    else
      for(int k=i-n; k<n-1; k++)
        std::cout << "*";
    std::cout << std::endl;
  }
  return 0;
}
