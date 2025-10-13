#include<iostream>

int partition(int a[], int low, int high) {
  int pivot = a[low];
  int i=low, j=high;
  while (i<j) {
    while(a[i] <= pivot && i <= high-1)
      i++;
    while(a[j] > pivot && j >= low+1)
      j--;
    if(i<j)
      std::swap(a[i], a[j]);
  }
  std::swap(a[low], a[j]); // pivot is a[low],
                           // after sorting, it should go to the middle of the subarray, 
                           // which is a[j] at the end of the while loop
  return j; // the index of pivot
}

void quick_sort(int a[], int low, int high) {
  if(low>=high) return;
  int p = partition(a, low, high);
  quick_sort(a, low, p-1);
  quick_sort(a, p+1, high);
}

int main() {
  int a[] = {2,3,5,4,6,1};

  quick_sort(a, 0, 5);
  
  for (int i = 0; i < 6; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;
  return 0;
}
