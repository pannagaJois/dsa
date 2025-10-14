#include<iostream>

bool isSorted(int a[], int n) {
  for (int i = 0; i < n-1; i++)
    if(a[i] > a[i+1])
      return false;
  return true;
}

int main() {
  int a[] = {1,3,3,4,5,6,7,8};
  if(isSorted(a, 8))
    std::cout << "sorted" << std::endl;
  else
    std::cout << "not sorted" << std::endl;
  return 0;
}
