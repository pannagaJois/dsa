#include<iostream>

void l_shift(int a[], int n, int d) {
  int temp[d];
  for(int i=0; i<d; i++)
    temp[i] = a[i];
  for(int i=0; i<n-d; i++)
    a[i] = a[i+d];
  for(int i=0; i<d; i++)
    a[n-d+i] = temp[i];
}

int main() {
  int a[] = {5,6,1,2,3,4};
  l_shift(a,6,3);
  for (int i = 0; i < 6; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
