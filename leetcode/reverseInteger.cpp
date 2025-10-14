#include<iostream>
#include<climits>

int rev(int n) {
  int r =0;
  while(n != 0) {
  int d = (n%10);
  if(INT_MAX/10 < r || (r==INT_MAX/10 && d>INT_MAX%10)) return 0; 
  if(INT_MIN/10 > r || (r==INT_MIN/10 && d<INT_MIN%10)) return 0; 
    r = (r*10) + d;
    n /= 10;
  }
  return r;
}

int main() {
  int n;
  std::cout<<"enter a number: ";
  std::cin>>n;
  int r = rev(n);
  std::cout<<r<<std::endl;
  return 0;
}
