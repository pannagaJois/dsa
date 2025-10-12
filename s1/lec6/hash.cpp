#include<iostream>

void hash(int a[], int *q, int max) {
  for (int i = 0; i < max; i++)
    q[a[i]]++;
}

int main (int argc, char *argv[]) {
  int max = 10;
  int a[] = {1, 1, 4, 2, 5, 8, 3, 4, 9, 3};
  int q[max+1] = {};
  hash(a, &q[0], max);
  for (int i = 0; i <= max; i++)
    std::cout << i << " : " << q[i] << std::endl;
  return 0;
}
