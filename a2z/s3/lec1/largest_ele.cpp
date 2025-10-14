#include<iostream>

int largest(int a[], int n) {
  int l = a[0];
  for (int i = 1; i < n; i++)
    if(l<a[i])
      l=a[i];
  return l;
}

int main() {
  int a[] = {3, 4, 5, 54, 23, 56, 90, 1};
  int l = largest(a, 8);
  std::cout << "largest ele is: " << l << std::endl;
  return 0;
}
