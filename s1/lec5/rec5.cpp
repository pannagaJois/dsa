#include<iostream>

int sum1(int i, int sum) {
  if(i == 0) return sum;
  return sum1(i-1, sum+i);
}

int s = 0;
int sum2(int n) {
  if(n == 0) return s;
  s += n;
  return sum2(n-1);
}

int main (int argc, char *argv[]) {
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  std::cout << "sum is: " << sum1(n, 0) << std::endl;
  std::cout << "sum is: " << sum2(n) << std::endl;

  // calling sum2() again will not give correct answer
  return 0;
}
