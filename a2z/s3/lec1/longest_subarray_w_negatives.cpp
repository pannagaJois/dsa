#include<iostream>
using namespace std;

int long1(int a[], int n, int k) {
  int l=0;
  for (int i = 0; i < n; i++) {
    int sum=0;
    for(int j=i; j<n; j++) {
      sum += a[j];
      if(sum == k)
        l = max(l, j-i+1);
    }
  }
  return l;
}

int main() {
  int a[] = {1,-2,3,4,-2};
  cout<<long1(a, 5, 3)<<endl;
  return 0;
}
