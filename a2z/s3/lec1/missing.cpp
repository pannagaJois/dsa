#include<iostream>

int miss1(int a[], int n) {
  for (int i = 1; i <= n; i++) {
    bool flag = false;
    for(int j=0; j<n; j++)
      if(a[j] == i) {
        flag = true;
        break;
      }
    if(!flag)
      return i;
  }
  return 0;
}

int miss2(int a[], int n) {
  int freq[n+1] = {0};
  for(int i=0; i<n-1; i++)
    freq[a[i]]++;
  for(int i=1; i<=n; i++)
    if(freq[i] == 0)
      return i;
  return 0;
}

int miss3(int a[], int n) {
  int s1 = (n*(n+1))/2;
  int s2 = 0;
  for(int i=0; i<n-1; i++)
    s2 += a[i];
  return s1-s2;
}

int miss4(int a[], int n) {
  int xor1=0, xor2=0;
  for(int i=1; i<=n; i++)
    xor1 = xor1 ^ i;
  for(int i=0; i<n-1; i++)
    xor2 = xor2 ^ a[i];
  return xor1 ^ xor2;
}
int main() {
  int a[] = {6,4,5,2,3};
  std::cout << "missing number is: " << miss1(a,6) << std::endl;
  std::cout << "missing number is: " << miss2(a,6) << std::endl;
  std::cout << "missing number is: " << miss3(a,6) << std::endl;
  std::cout << "missing number is: " << miss4(a,6) << std::endl;
  return 0;
}
