#include<iostream>
#include<unordered_map>
#include<list>

int main (int argc, char *argv[]) {
  int n;
  std::cout << "enter the no of elements: ";
  std::cin >> n;

  int num[n];
  std::cout << "enter the array elements: ";
  for (int i = 0; i < n; i++)
    std::cin >> num[i];

  std::unordered_map<int, int> m;
  for (int i = 0; i < sizeof(num)/sizeof(num[0]); i++)
    m[num[i]]++;
  
  std::list<std::pair<int, int>> freq;
  for(auto it : m)
    freq.push_back(it);

  for(auto it : freq)
    std::cout << it.first << " : " << it.second << std::endl;

  return 0;
}
