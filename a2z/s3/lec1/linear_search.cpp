#include<iostream>
using namespace std;

int search(int a[], int ele, int n) {
  for(int i=0; i<n; i++)
    if(a[i] == ele)
      return i;
  return -1;
}

int main() {
  int a[] = {1,2,3,5,4,7,6,8,9};
  int pos = search(a,7,9);
  if(pos == -1)
    cout<<"element not found\n";
  else
    cout<<"element found at index: " << pos << endl;
  return 0;
}
