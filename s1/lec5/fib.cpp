#include<iostream>

int fib(int *f, int n) {
  if(n <= 0) {
    *f = 0;
    return *f;
  }
  
  if(n == 1) {
    *f = 0;
    *(f+1) = 1;
    return *(f+n);
  }

  *(f+n) = fib(f, n-1) + fib(f, n-2);
  return *(f+n);
}

int main (int argc, char *argv[]) {
  std::cout << "Enter a number: ";
  int n;
  std::cin >> n;
  int f[n+1];

  fib(&f[0], n);

  for (int i = 0; i <= n; i++)
    std::cout << f[i] << "  ";
  std::cout << std::endl;
  return 0;
}
