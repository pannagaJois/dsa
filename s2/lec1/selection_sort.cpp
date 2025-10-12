#include <iostream>

void selection_sort(int a[], int n) {
  for (int i = 0; i < n-1; i++) {
    int min_index = i;
    for(int j = i+1; j < n; j++)
      if(a[min_index] > a[j])
        min_index = j;
    std::swap(a[min_index], a[i]);
  }
}
int main (int argc, char *argv[]) {
  int a[] = {5, 3, 6, 2, 1, 4};

  selection_sort(a, 6);

  for (int i = 0; i < 6; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
