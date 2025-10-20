#include<iostream>
#include<algorithm>
using namespace std;

int seq(int a[], int n) {
  sort(a, a+n);
  int c=0, m=0;
  for(int i=0; i<n-1; i++) {
    if(a[i]+1 == a[i+1]) {
      c++;
      if(m<c)
        m=c;
    }
    else
      c=0;
  }
  return m+1;
}

int main() {
  int a[] = {4,3,2,5,1,8,9,70};
  cout<<"max seq is: "<<seq(a,8)<<endl;
  return 0;
}
