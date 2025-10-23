#include<iostream>
using namespace std;

int fib1(int n) {
  if(n<=1) return n;
  return (fib1(n-1) + fib1(n-2));
}

int fib2(int n) {
  if(n<=1) return n;
  int a=0, b=1;
  for(int i=2; i<=n; i++) {
    int c = a+b;
    a=b;
    b=c;
  }
  return b;
}

int main() {
  cout<<fib1(14)<<endl;
  cout<<fib2(14)<<endl;
  return 0;
}
