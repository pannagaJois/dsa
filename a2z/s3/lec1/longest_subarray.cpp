#include<iostream>
#include<map>
#include<algorithm>
using namespace std;

int longest1(int a[], int n, int x) {
  int l=0;
  for(int i=0; i<n; i++)
    for(int j=i; j<n; j++) {
      int sum = 0;
      for(int k=i; k<=j; k++)
        sum += a[k];
      if(sum == x)
        l = max(l, j-i+1);
    }
  return l;
}

int longest2(int a[], int n, int k) {
  int l=0;
  for(int i=0; i<n; i++) {
    int s=0;
    for(int j=i; j<n; j++) {
      s +=a[j];
      if(s==k)
        l=max(l,j-i+1);
    }
  }
  return l;
}

int longest3(int a[], int n, int k) {
  int l=0;
  for(int i=0; i<n; i++) {
    int s=0, j=i;
    while(j<n) {
      if(s+a[j]<=k) {
        s += a[j];
        j++;
      }
      else break;
    }
    if(s==k)
      l=max(l,j-i);
  }
  return l;
}

int main() {
  int a[] = {1,2,1,1,1};
  cout<<longest1(a,5,3)<<endl;
  cout<<longest2(a,5,3)<<endl;
  cout<<longest3(a,5,3)<<endl;
  return 0;
}
