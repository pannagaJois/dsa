#include<iostream>

int main (int argc, char *argv[]) {
  int n=5;
  for (int i = 0; i < n; i++) {
    char a='A';
    for(int j=0; j<=i; j++)
    {
      std::cout <<a;
      a++;
    }
    std::cout << std::endl;
  }
  return 0;
}
