#include<iostream>

int main (int argc, char *argv[]) {
  int n=5;

  for (int i = 0; i < n; i++) {
    for(int j=0; j<n; j++){
      if(i==0 || i==n-1 || j==0 || j==n-1)
        std::cout << "*";
      else
        std::cout << " ";
    }
    std::cout << std::endl;
  }
  return 0;
}
