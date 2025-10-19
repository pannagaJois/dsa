#include<iostream>
#include<vector>
using namespace std;

vector<int> leader(int a[], int n) {
  int max=a[n-1];
  vector<int> l;
  l.push_back(max);
  for(int i=n-2; i>=0; i--)
    if(a[i] > max) {
      max = a[i];
      l.push_back(max);
    }
  return l;
}

int main() {
  int a[] = {10, 22, 12, 3, 0, 6};
  vector<int> v = leader(a, 6);
  for(auto i : v)
    cout<<i<<endl;
  return 0;
}
