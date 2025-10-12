// hashing using maps - integer values
#include<iostream>
#include<map>

int main (int argc, char *argv[]) {
  int n;
  std::cout << "enter the no of elements: ";
  std::cin >> n;
  int a[n];
  std::cout << "enter the elements: ";
  for (int  i = 0; i < n; i++)
    std::cin >> a[i];

  std::map<int, int> m;
  for (int  i = 0; i < n; i++)
    m[a[i]]++; // m[key] = value;

  for(auto it : m)
    std::cout << it.first << " : " << it.second << std::endl;
  return 0;
}
// use unordered_map most of the time as it is O(1) on most cases
