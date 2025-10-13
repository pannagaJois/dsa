#include<iostream>
#include<unordered_map>

int main (int argc, char *argv[]) {
  int a[] = {1, 2, 1, 2, 2, 1, 3, 7, 5, 4, 6};
  int n = sizeof(a)/sizeof(a[0]);
  std::unordered_map<int, int> m;
  for (int i = 0; i < n; i++)
    m[a[i]]++;

  int maxf = 0, minf = n, max_ele = 0, min_ele = 0;
  for(auto it : m) {
    int e = it.first;
    int f = it.second;
    if(f >= maxf) {
      if(f == maxf)
        max_ele = std::min(max_ele, e);
      else {
        maxf = f;
        max_ele = e;
      }
    }
    if(f <= minf) {
      if(f == minf)
        min_ele = std::max(min_ele, e);
      else {
        min_ele = e;
        minf = f;
      }
    }
  }
  std::cout << "max freq ele: " << max_ele<< std::endl;
  std::cout << "min freq ele: " << min_ele << std::endl;
  return 0;
}
