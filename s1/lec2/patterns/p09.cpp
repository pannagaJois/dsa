#include<iostream>

int main (int argc, char *argv[]) {
  int l = 5;
  for (int i=0; i<l; i++) {
    for(int j=l; j>i; j--)
      std::cout << " ";
    for(int k=0; k<(2*i)+1; k++)
      std::cout << "*";
    std::cout << std::endl;
  }
  for (int i=0; i<l; i++) {
   for(int j=0; j<i+1; j++)
     std::cout << " ";
   for(int k=(2*i)+1; k<(2*l); k++)
     std::cout << "*";
   std::cout << std::endl;
  }
  return 0;
}
