#include<iostream>

int main (int argc, char *argv[]) {

  // pairs are used to store 2 values
  // they can be int, float etc
  std::pair<int, int> p = {1,4};
  std::cout << p.first << std::endl;
  
  //they can also be used to store more than 2 values like this (nested)
  std::pair<int, std::pair<int, int>> q = {1, {2,3}};
  std::cout << q.second.first << std::endl;

  //pair can be treated as a datatype
  std::pair<int, int> a[] = { {1,2}, {3,4}, {5,6}};
  std::cout << a[2].first;

  return 0;
}
