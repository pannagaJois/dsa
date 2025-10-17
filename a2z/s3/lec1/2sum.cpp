#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

pair<int, int> sum1(int a[], int s, int n) {
  pair<int, int> p;
  for(int i=0; i<n; i++)
    for (int j = i+1; j < n; j++)
      if(a[i]+a[j]==s) {
        p = {i,j};
        return p;
      }
  return {-1,-1};
}

pair<int, int> sum2(int a[], int s, int n) {
  unordered_map<int, int> m;
  for (int i = 0; i < n; i++) {
    int num = a[i];
    int rem = s - num;
    if(m.find(rem) != m.end())
      return {m[rem], i};
    m[num] = i;
  }
  return {-1, -1};
}

// sum2 wont work because we are sorting the array and hence the indices change
pair<int, int> sum3(int a[], int s, int n) {
  pair<int,int> p;
  int i=0, j=n-1;
  sort(a, a+n);
  while(i<j) {
    if(a[i]+a[j]==s) {
      return {i,j};
    }
    if(a[i]+a[j]>s)
      j--;
    else
      i++;
  }
  return {-1,-1};
}

int main() {
  int a[] = {1,3,2,2,9};
  pair<int,int> p1 = sum1(a, 4, 5);
  pair<int,int> p2 = sum2(a, 4, 5);
  pair<int,int> p3 = sum3(a, 4, 5);
  cout<<"indices are: "<<p1.first<<" and "<<p1.second<<endl;
  cout<<"indices are: "<<p2.first<<" and "<<p2.second<<endl;
  cout<<"indices are: "<<p3.first<<" and "<<p3.second<<endl;
  return 0;
}
