#include<iostream>

void rev(int *a, int n) {
  for (int i = 0; i < n/2; i++) {
    int temp = *(a+i);
    *(a+i) = *(a+n-i-1);
    *(a+n-i-1) = temp;
  }
}

void rev1(int *a, int n) {
  if(n <= 1) return;
  int temp = *(a);
  *(a) = *(a+n-1);
  *(a+n-1) = temp;
  rev1((a+1), (n-2));
  return;
}

int main (int argc, char *argv[]) {
  int n;
  std::cout << "Enter the length: ";
  std::cin >> n;

  int a[n];
  std::cout << "Enter the array elements: ";
  for (int i = 0; i < n; i++)
    std::cin >> a[i];

  rev(&a[0], n);
  
  for (int i = 0; i < n; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;

  rev1(&a[0], n);
  
  for (int i = 0; i < n; i++)
    std::cout << a[i] << "  ";
  std::cout << std::endl;

  return 0;
}
