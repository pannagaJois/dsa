#include<iostream>

bool prime(int n) {
  for (int i = 2; i*i <= n; i++) // or i<=sqrt(n)
    if(n%i == 0)
      return false;
  return true;
}

int main (int argc, char *argv[]) {
  int n;
  std::cout << "Enter a number: ";
  std::cin >> n;
  if(prime(n))
    std::cout << "its a prime" << std::endl;
  else
    std::cout << "its not a prime" << std::endl;
  return 0;
}
