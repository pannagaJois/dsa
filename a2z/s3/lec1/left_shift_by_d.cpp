#include<iostream>
#include<algorithm>

void rev(int a[], int s, int e) {
  while (s<e) {
    std::swap(a[s], a[e]);
    s++;
    e--;
  }
}

void l_shift(int a[], int n, int d) {
  int temp[d];
  for(int i=0; i<d; i++)
    temp[i] = a[i];
  for(int i=0; i<n-d; i++)
    a[i] = a[i+d];
  for(int i=0; i<d; i++)
    a[n-d+i] = temp[i];
}

void l_shift1(int a[], int n, int d) {
  rev(a, 0, d-1);
  rev(a, d, n-1);
  rev(a, 0, n-1);
}

int main() {
  int a[] = {5,6,1,2,3,4};
  l_shift1(a,6,2);
  for (int i = 0; i < 6; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
