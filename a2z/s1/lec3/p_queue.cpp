#include<iostream>
#include<queue>

int main (int argc, char *argv[]) {
  std::priority_queue<int> pq; // max heap

  pq.push(7); // {7}
  pq.push(4); // {7, 4}
  pq.push(9); // {9, 7, 4}
  pq.emplace(1); // {9, 7, 4, 1}
  
// largest value stays at top

  std::cout << pq.top() << std::endl;

  pq.pop(); // {7, 4, 1}
  
  // minimum heap, stores the smallest value at top
  std::priority_queue<int, std::vector<int>, std::greater<int>> mh;

  mh.push(7); // {7}
  mh.push(4); // {4, 7}
  mh.push(9); // {4, 7, 9}
  mh.emplace(1); // {1, 4, 7, 9}
  
  std::cout << mh.top() << std::endl;
  return 0;
}
