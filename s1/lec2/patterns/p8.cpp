#include<iostream>

int main (int argc, char *argv[]) {
  int l = 5;
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < i; j++) {
     std::cout << " "; 
    }
    for (int k = (i+1)*2; k < (2*l)+1; k++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
