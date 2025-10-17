#include<iostream>
#include<cstring>
using namespace std;

void rev(char a[]) {
  int n = strlen(a);
  for(int i=0; i<n/2; i++)
    swap(a[i], a[n-i-1]);
}

int main() {
  char a[] = {'a','b','c','d','e'};
  rev(a);
  for (int i = 0; i < 5; i++)
    cout<<a[i];
  cout<<endl;
  return 0;
}
