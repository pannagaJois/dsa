#include<iostream>

int main (int argc, char *argv[]) {
  int n=5;

  for (int i = 0; i < n; i++) {
    for(int j=n; j>i; j--)
      std::cout << "*";

    for(int k=0; k<2*i; k++)
      std::cout << " ";

    for(int l=n; l>i; l--)
      std::cout << "*";

    std::cout << std::endl;
  }

  for (int i = 0; i < n; i++) {
    for(int j=0; j<=i; j++)
      std::cout << "*";

    for(int k=2*i; k<2*(n-1); k++)
      std::cout << " ";

    for(int l=0; l<=i; l++)
      std::cout << "*";
    std::cout << std::endl;
  }
  return 0;
}
