#include<iostream>
#include<deque>

int main (int argc, char *argv[]) {
  
  std::deque<int> dq;
  dq.push_back(2); // { 2 }
  dq.emplace_back(3); // {2, 3}
  dq.push_front(1); // {1, 2, 3}
  dq.emplace_front(0); // {0, 1, 2, 3} 

  dq.pop_back(); // {0, 1, 2}
  dq.pop_front(); //{1, 2}

  std::cout << dq.back() << std::endl;
  std::cout << dq.front() << std::endl;

  for(auto i : dq) 
    std::cout << i<< "  ";
  return 0;
}
