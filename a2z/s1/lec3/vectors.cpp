#include<iostream>
#include<vector>

int main (int argc, char *argv[]) {
  
  //vector is used to store elements when we dont know the size required
  //it is dynamic

  //declaration and initialisation

  std::vector<int> a; //creates an empty container

  a.push_back(1); //stores 1 on 0th index
  a.emplace_back(2); //stores 2 on 1st index

  std::vector<std::pair<int, int>> b; //vector of pairs
  b.push_back({1,2}); //curly braces required
  b.emplace_back(3,4); //curly braces not required


  std::vector<int> c(5, 10); //stores five 10s 

  std::vector<int> d(c);

  std::vector<int> e = {1, 2, 3, 4, 5};

  //iterators

  std::vector<int>::iterator it = e.begin(); //it is a pointer that points to the beginning of the vector
  std::cout << *it << std::endl;

  std::vector<int>::iterator it1 = e.end(); //points to the next location after end of the vector
  std::cout << *it1 << std::endl;

  std::vector<int>::reverse_iterator it2 = e.rend(); //points to the location before the beginning of the vector
  std::cout << *it2 << std::endl;
  
  std::vector<int>::reverse_iterator it3 = e.rbegin(); //points to the last element, incrementing it brings it to the 2nd last element
  std::cout << *it3 << std::endl;
  
  // printing all the elements of a vector

  for (std::vector<int>::iterator it4 = e.begin(); it4 != e.end(); it4++)
    std::cout << *(it4)<< "  ";
  std::cout << std::endl;
  
  // same as above
  for (auto it5 = e.begin(); it5 != e.end(); it5++)
    std::cout << *(it5)<< "  ";
  std::cout << std::endl;

  for(auto i : e) //i is an integer here
    std::cout << i<< "  ";
  std::cout << std::endl;
  //deletion of elements
  
  e.erase(e.begin()+1); // {1, 3, 4, 5)
  e.erase(e.begin(), e.end()-1); // {5}
  for(auto i : e) //i is an integer here
    std::cout << i<< "  ";

  //inserting
  
  e.insert(e.begin(), 1); // {1, 5}
  e.insert(e.begin()+1, 3, 2); // {1, 2, 2, 2, 5}
  std::vector<int> f = {3, 4};
  e.insert(e.begin()+4, f.begin(), f.end()); // {1, 2, 2, 2, 3, 4, 5}
  std::cout << std::endl;
  for(auto i : e) //i is an integer here
    std::cout << i<< "  ";

  e.pop_back(); // deletes the last element

  e.swap(f); //swaps the 2 vectors
  e.swap(f);

  f.clear(); //clears the entire vector
  std::cout << f.empty(); // to check whether the given vector is empty
  return 0;
}
