#include<climits>
#include<iostream>
using namespace std;

int max1(int x[], int n) {
  int max = INT_MIN, a=0, b=0, sum = 0;
  for(int i=0; i<n; i++) {
    sum=0;
    for(int j=i; j<n; j++) {
      sum += x[j];
      if(sum>max) {
        max = sum;
        a=i;
        b=j;
      }
    }
  }
  for(int k=a; k<=b; k++)
    cout<<x[k]<<"  ";
  cout<<"\nmax sum is: ";
  return max;
}

//if we dont have have to consider sum<0, do this
int max2(int a[], int n) {
  int sum=0, max=0;
  for(int i=0; i<n; i++) {
    sum += a[i];
    if(sum>max)
      max=sum;
    if(sum+a[i]<0)
      sum=0;
  }
  return max;
}

int main() {
  int a[] = {2,1,-2,-3,4,6,-1,3};
  cout<<max1(a, 8)<<endl;
  cout<<max2(a, 8)<<endl;
  return 0;
}

