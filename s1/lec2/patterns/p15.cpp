#include<iostream>

int main (int argc, char *argv[]) {
  int n=5;
  for (int i = n; i > 0; i--) {
    char a='A';
    for(int j=0; j<i; j++)
    {
      std::cout <<a;
      a++;
    }
    std::cout << std::endl;
  }
  return 0;
}
