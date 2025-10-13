#include<iostream>
#include<map>

int main (int argc, char *argv[]) {
  // maps store a key and a value. 
  // the values can repeat, but keys are always unique
  // it stores the keys in a sorted order

  std::map<int, int> m;
  
  m[1] = 2;
  m.insert({3, 1});
  m.emplace(2, 4);

  // multimap - same thing as map, but it can store multiple values for a key

  // unordered map - unique key, but not sorted
  return 0;
}
