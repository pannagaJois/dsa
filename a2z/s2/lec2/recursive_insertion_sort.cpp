#include<iostream>

void r_insertion_sort(int a[], int n, int i) {
  if(i == n) return;
  int j=i;
  while (j>0 && a[j] < a[j-1]) {
    std::swap(a[j], a[j-1]);
    j--;
  }
  r_insertion_sort(a, n, i+1);
}

int main() {
  int a[] = {4,3,2,5,6,1};
  r_insertion_sort(a, 6, 1);
  for (int i = 0; i < 6; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
