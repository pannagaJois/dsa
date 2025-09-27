#include<iostream>

int main (int argc, char *argv[]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i+1; j++) {
      std::cout<<i+1;
    }
    std::cout << std::endl;
  }
  return 0;
}
