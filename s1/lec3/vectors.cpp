#include<iostream>
#include<vector>

int main (int argc, char *argv[]) {
  
  //vector is used to store elements when we dont know the size required
  //it is dynamic
  std::vector<int> a; //creates an empty container

  a.push_back(1); //stores 1 on 0th index
  a.emplace_back(2); //stores 2 on 1st index

  std::vector<std::pair<int, int>> b; //vector of pairs
  b.push_back({1,2}); //curly braces required
  b.emplace_back(3,4); //curly braces not required


  std::vector<int> c(5, 10); //stores five 10s 

  vector<int>::iterator it = c.begin(); //it is a pointer that points to the beginning of the vector
  std::cout << *it << std::endl;

  vector<int>::iterator it = c.end(); //points to the next location after end of the vector
  
  vector<int>::iterator it = c.rend(); //points to the location before the beginning of the vector
  
  vector<int>::iterator it = c.rbegin(); //points to the last element, incrementing it brings it to the 2nd last element
   
  return 0;
}
