#include<iostream>
using namespace std;

int max1(int a[], int n) {
  int c = 0, x = 0;
  for(int i=0; i<n; i++) {
    if(a[i] == 1)
      c++;
    else if(a[i] == 0) {
      if(c>x)
        x=c;
      c=0;
    }
  }
  if(c>x)
    x=c;
  return x;
}

int main() {
    int a[] = {1,1,1,1,1,1,1,0,0,1,0,1,0};
    cout << "max consecutive 1s are: " << max1(a, 13) << endl;
    return 0;
}
