#include<iostream>

void l_shift(int a[], int n) {
  int t = a[0];
  for(int i=0; i<n-1; i++)
    a[i]=a[i+1];
  a[n-1]=t;
}

int main() {
  int a[] = {5,1,2,3,4};
  l_shift(a,5);
  for(int i=0; i<5; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
