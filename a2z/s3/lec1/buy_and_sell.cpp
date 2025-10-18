#include<iostream>
#include<climits>
using namespace std;

int prof1(int a[], int n) {
  int p=0;
  for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
      if(a[j]-a[i]>p)
        p=a[j]-a[i];
  return p;
}

int prof2(int a[], int n) {
  int minprice=a[0], prof=INT_MIN;
  for(int i=0; i<n; i++) {
    minprice = min(minprice, a[i]);
    prof = max(prof, a[i]-minprice);
  }
  return prof;
}

int main() {
  int a[] = {5,2,7,1,5,4};
  cout<<prof1(a,6)<<endl;
  cout<<prof2(a,6)<<endl;
  return 0;
}
