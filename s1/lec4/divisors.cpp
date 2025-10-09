#include<iostream>
#include<vector>
#include<cmath>

int* div(int n, int* size) {
  int c=0;
  int* d = new int[n];
  for (int i = 1; i <= n/2; i++)
    if(n%i == 0)
      d[c++] = i;
  *size = c;
  return d;
}

// optimal method
std::vector<int> div1(int n) {
  std::vector<int> v;
  for (int i = 1; i <= std::sqrt(n); i++) {
    if(n%i == 0) {
      v.emplace_back(i);
      if(i != n/i)
        v.emplace_back(n/i);
    }
  }
  return v;
}

int main (int argc, char *argv[]) {
  int n, size;
  std::cout << "Enter a number: ";
  std::cin >> n;
  int *d = div(n, &size);
  std::cout << "Divisors: " << std::endl;
  for(int i=0; i<size; i++)
    std::cout << *(d+i) << "\t";
  std::cout << n << std::endl;
  delete[] d; 

  //optimal method
  std::vector<int> divisors = div1(n);
  for(auto i : divisors) 
    std::cout << i<< "\t";
  std::cout << std::endl;
  return 0;
}
