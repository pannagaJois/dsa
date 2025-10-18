#include<iostream>
#include<unordered_map>
using namespace std;

int maj1(int a[], int n) {
  unordered_map<int, int> m;
  for(int i=0; i<n; i++) {
    m[a[i]]++;
    if(m[a[i]] > n/2)
      return a[i];
  }
  return -1;
}

int maj2(int a[], int n) {
  //take maj ele as a and all others as b
  //so we're finding max(a,b
  int c=0, ele;
  for(int i=0; i<n; i++) {
    if(c == 0)
      ele = a[i];
    if(ele == a[i])
      c++;
    else
      c--;
  }
  return ele;
}

int main() {
  int a[] = {1,4,4,4,1,2,4,3,4};
  cout<<"maj ele is: " << maj1(a,9) << endl;
  cout<<"maj ele is: " << maj2(a,9) << endl;
  return 0;
}
