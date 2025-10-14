#include<iostream>

int dup(int a[], int n) {
  int c=0;
  for (int i = 1; i < n; i++) {
    if(a[i] != a[i-1]) {
      c++;
      a[c] = a[i];
    }
  }
  return c+1;
}
// c is the index after a sub array of unique elements, its only updated if we find a unique element
int main() {
  int a[] = {1,1,2,3,4,4,5,6,7,8,9};
  int n = dup(a, 11);
  for (int i = 0; i < n; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
