#include<iostream>
#include<set>

int main (int argc, char *argv[]) {
  std::set<int> s;

  //set stores everything in a sorted order and it only stores unique values
  
  s.insert(1); // {1}
  s.emplace(2); // {1, 2}
  s.insert(1); // {1, 2}
  s.emplace(2); // {1, 2} 
  s.insert(4); // {1, 2, 4}
  s.insert(3); // {1, 2, 3, 4}

  auto it = s.find(2); // returns the address

  auto it1 = s.find(6); // returns the address next to the last element (since 6 doesnt exist)

  s.erase(4); // {1, 2, 3}
  
  int c = s.count(1); // will be either 0 or 1
  
  // many functions are similar to vectors, refer those

  auto it2 = s.lower_bound(2);
  auto it3 = s.upper_bound(3);

  // multiset - its like set, but we can store the same value multiple times
  
  std::multiset<int> ms;

  ms.insert(1); // {1}
  ms.insert(1); // {1, 1}
  ms.insert(1); // {1, 1, 1}

  ms.erase(1); // removes all 1

  // unordered set - its like set, but it does not store the values in the sorted order.
  // it stores only unique value
  return 0;
}
