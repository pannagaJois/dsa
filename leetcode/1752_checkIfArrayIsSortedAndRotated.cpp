#include<iostream>
#include<algorithm>
using namespace std;

// this wont work if there are duplicates
bool check1(int a[], int n) {
  int b[n];
  for(int i=0; i<n; i++)
    b[i] = a[i];
  sort(a, a+n);
  int k=0;
  while(a[0] != b[k])
    k++;
  for(int i=0; i<n; i++)
    if(a[i] != b[(i+k)%n])
      return false;
  return true;
}

bool check2(int a[], int n) {
  int k=0;
  for(int i=0; i<n-1; i++)
    if(a[i] > a[i+1])
      k++;
  if(a[0] < a[n-1])
    k++;
  if(k>1)
    return false;
  return true;
}

int main() {\
  int a[] = {6,10,6};
  if(check1(a,3))
    cout<<"yes"<<endl;
  else
    cout<<"no"<<endl;
  if(check2(a,3))
    cout<<"yes"<<endl;
  else
    cout<<"no"<<endl;
  return 0;
}
