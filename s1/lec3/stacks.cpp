#include<iostream>
#include<stack>

int main (int argc, char *argv[]) {
  std::stack<int> st;
  st.push(1); // {1}
  st.push(2); // {2, 1}
  st.push(3); // {3, 2, 1}
  st.push(4); // {4, 3, 2, 1}
  
  std::cout << st.top() << std::endl;

  st.pop(); // {3, 2, 1}

  std::cout << st.top() << std::endl;
  std::cout << st.size() << std::endl;
  std::cout << st.empty() << std::endl;

  std::stack<int>st1, st2;

  st1.swap(st2);
  return 0;
}
