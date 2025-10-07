#include<iostream>
#include<list>
int main (int argc, char *argv[]) {
  
  std::list<int> ls; //declaration
  
  ls.push_back(2); // { 2 }
  ls.emplace_back(3); // {2, 3}
  ls.push_front(1); // {1, 2, 3}
  ls.emplace_front(0); // {0, 1, 2, 3} 

  //begin, end, rbegin, rend, clear, insert, size, swap - these can be used in lists similarly
  //to how its used in vectors
  for(auto i : ls) 
    std::cout << i<< "  ";
  return 0;
}
