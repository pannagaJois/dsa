#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void arrange1(int a[], int n) {
  int x=0,y=1;
  unordered_map<int, int> v;
  for(int i=0; i<n; i++) {
    if(a[i]>0) {
      v[x] = a[i];
      x+=2;
    }
    else {
      v[y] = a[i];
      y+=2;
    }
  }
  cout<<v[5]<<endl;
  for(int i=0; i<n; i++)
    a[i] = v[i];
}

void arrange2(int a[], int n) {
  vector<int> v1, v2;
  for(int i=0; i<n; i++) {
    if(a[i] > 0)
      v1.push_back(a[i]);
    else
      v2.push_back(a[i]);
  }
  for(int i=0; i<n/2; i++) {
    a[2*i] = v1[i];
    a[2*i+1] = v2[i];
  }
}

int main() {
  int a[] = {1,2,3,-4,-5,-3,-1,-2,5,4};
  arrange1(a,10);
  for(int i=0; i<10; i++)
    cout<<a[i]<<"  ";
  cout<<endl;
  return 0;
}
