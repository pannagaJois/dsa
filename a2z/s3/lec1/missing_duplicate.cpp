#include<iostream>
using namespace std;
int miss1(int a[], int n) {
  int x = (n/2)+1;
  int s1 = (x+1)*x;
  int s2 = 0;
  for(int i=0;i<n;i++)
    s2 += a[i];
  return (s1-s2);
}

int miss2(int a[], int n) {
  int xor1 = 0; int xor2 = 0;
  for(int i=0;i<n;i++)
    xor1 = xor1 ^ a[i];
  return xor1 ^ xor2;
}

int main() {
  int a[] = {1,2,3,2,3,1,4,4,5,5,6};
  cout << "missing duplicate is: " << miss1(a, 11) << endl;
  cout << "missing duplicate is: " << miss2(a, 11) << endl;
  return 0;
}
