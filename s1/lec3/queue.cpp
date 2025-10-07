#include<iostream>
#include<queue>

int main (int argc, char *argv[]) {
  std::queue<int> q;

  q.push(1); // {1}
  q.push(2); // {1, 2}
  q.push(3); // {1, 2, 3}
  
  q.back() += 3; // {1, 2, 6}

  std::cout << q.front() << std::endl; 

  q.pop(); // {2, 6}

  std::cout << q.front() << std::endl;

  return 0;
}
