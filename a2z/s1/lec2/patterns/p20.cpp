#include<iostream>

int main (int argc, char *argv[]) {
  int n=5;

  for (int i = 0; i < 2*n-1; i++) {
    if (i<n) {
      for(int j=0; j<=i; j++)
        std::cout << "*";

      for(int k=2*n; k>2*(i+1); k--)
        std::cout << " ";

      for(int l=0; l<=i; l++)
        std::cout << "*";
    }
    else {
      for(int j=0; j<2*n-(i+1); j++)
        std::cout << "*";

      for(int k=0; k<2*(i-n+1); k++)
        std::cout << " ";

      for(int l=0; l<2*n-(i+1); l++)
        std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
