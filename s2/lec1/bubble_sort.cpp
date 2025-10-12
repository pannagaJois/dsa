#include<iostream>

void bubble_sort(int a[], int n) {
  for (int i = 0; i < n-1; i++) {
    int noOfSwaps = 0;
    for(int j=0; j<n-i-1; j++)
      if(a[j] > a[j+1]) {
        std::swap(a[j], a[j+1]);
        noOfSwaps++;
      }
    if(noOfSwaps == 0)
      break;
  }
}

int main (int argc, char *argv[]) {
  int a[] = {4, 3, 6, 5, 2, 1};

  bubble_sort(a, 6);

  for (int i = 0; i < 6; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
