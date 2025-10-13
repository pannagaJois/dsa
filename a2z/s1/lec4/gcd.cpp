#include<iostream>

int gcd1(int a, int b) {
  int gcd, s=a;
  if(s>b)
    s=b;

  for(int i=1; i<=s; i++)
    if(a%i == 0 && b%i == 0)
      gcd = i;
  return gcd;
}

int gcd2(int a, int b) {
  int s=a;
  if(s>b)
    s=b;

  for(int i=s; i>=1; i--)
    if(a%i == 0 && b%i == 0)
      return i;
  return 1;
}

int gcd3(int a, int b) { // euclidean algorithm
  // subtract the smaller no from the bigger one until 
  // one of them becomes zero, the other no is the gcd

  //if a no becomes 0 due to subtraction, then both of them should be equal

  while (a != b) {
    if(a>b)
      a=a-b;
    else
      b=b-a;
  }
  return a; // or b, they're equal
}

//remainder based euclidean algo
int gcd4(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) a %= b;
        else b %= a;
    }
    return (a == 0) ? b : a;
}


int main (int argc, char *argv[]) {
  int a, b, gcd;
  std::cout << "enter 2 numbers: ";
  std::cin >> a >> b;
  std::cout << "gcd is: " << gcd1(a, b) << std::endl;
  std::cout << "gcd is: " << gcd2(a, b) << std::endl;
  std::cout << "gcd is: " << gcd3(a, b) << std::endl;
  std::cout << "gcd is: " << gcd4(a, b) << std::endl;
  return 0;
}
