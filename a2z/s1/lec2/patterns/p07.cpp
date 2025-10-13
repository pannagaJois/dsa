#include<iostream>

int main (int argc, char *argv[]) {
  for (int i = 0; i < 5; i++) {
    for(int j = 6; j>i; j--)
      std::cout << " ";
    for(int k = (2*i)+1; k<; k++)
      std::cout << "*";
    std::cout << std::endl;
  }
  return 0;
}
