#include<iostream>

void insertion_sort(int a[], int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while(j>0 && a[j-1] > a[j]) {
      std::swap(a[j], a[j-1]);
      j--;
    }
  }
}

int main (int argc, char *argv[]) {
  int a[] = {4, 2, 1, 5, 6, 3};

  insertion_sort(a, 6);

  for (int i = 0; i < 6; i++)
    std::cout << a[i] << "  ";
    std::cout << std::endl;
  return 0;
}
