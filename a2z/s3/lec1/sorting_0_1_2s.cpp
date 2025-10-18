#include<iostream>
using namespace std;

void sort1(int a[], int n) {
  int x=0, y=0, z=0;
  for(int i=0; i<n; i++) {
    if(a[i] == 0)
      x++;
    else if(a[i] == 1)
      y++;
  }
  z=n-x-y;
  for(int i=0; i<x; i++)
    a[i]=0;
  for(int i=x; i<x+y; i++)
    a[i]=1;
  for(int i=x+y; i<n; i++)
    a[i]=2;
}

void sort2(int a[], int n) {
  int l=0, m=0, h=n-1;
  while(m<=h) {
    if(a[m] == 0) {
      swap(a[l], a[m]);
      l++;
      m++;
    }
    else if(a[m] == 1)
      m++;
    else if(a[m] == 2) {
      swap(a[m], a[h]);
      h--;
    }
  }
}

int main() {
  int a[] = {2,2,0,0,1,1,0};
  //sort1(a,7);
  sort2(a,7);
  for(int i=0; i<7; i++) 
    cout<<a[i];
  cout<<endl;
}
