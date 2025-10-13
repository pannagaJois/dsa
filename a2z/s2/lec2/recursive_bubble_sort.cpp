#include <iostream>

void r_bubble_sort(int a[], int n) {
  if(n == 1) return;
  int noOfSwaps=0;
  for (int i = 0; i < n-1; i++)
    if(a[i] > a[i+1]) {
      std::swap(a[i], a[i+1]);
      noOfSwaps++;
    }
  if(noOfSwaps == 0) return;
  r_bubble_sort(a, n-1);
}

int main() {
  int a[] = {3,4,5,2,6,1};
  r_bubble_sort(a, 6);
  for (int i = 0; i < 6; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
