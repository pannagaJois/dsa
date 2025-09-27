#include<iostream>

int main (int argc, char *argv[]) {
  int n = 5;
  for (int i = 0; i < n; i++) {
    for(int j=0; j<=i; j++)
      if(i%2==0)
        if(j%2==0)
          std::cout << "1";
        else
          std::cout << "0";
      else
        if(j%2==0)
          std::cout << "0";
        else
          std::cout << "1";
    std::cout << std::endl;
  }
  return 0;
}
