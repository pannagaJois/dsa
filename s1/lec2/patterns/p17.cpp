#include<iostream>

int main (int argc, char *argv[]) {
  int n=5;
  for (int i = 0; i < n; i++) {
    char a='A';
    for(int j=0; j<n-i-1; j++)
      std::cout << " ";
    for(int k=0; k<2*i+1; k++) {
      std::cout << a;
      if(k<i)
        a++;
      else
        a--;
    }
    std::cout << std::endl;
  }
  return 0;
}
