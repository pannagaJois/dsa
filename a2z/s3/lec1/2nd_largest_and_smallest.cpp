#include<iostream>
#include<climits>

int sec_largest(int a[], int n) {
  int l = a[0];
  int sl=INT_MIN;
  for (int i = 1; i < n; i++) {
    if(a[i]>l) {
      sl=l;
      l=a[i];
    }
    else if(a[i] > sl && sl < l)
      sl=a[i];
  }
  if(sl == INT_MIN) return -1;
  return sl;
}

int sec_smallest(int a[], int n) {
  int s = a[0];
  int ss=INT_MAX;
  for (int i = 1; i < n; i++) {
    if(a[i]<s) {
      ss=s;
      s=a[i];
    }
    else if(a[i] < ss && ss > s)
      ss = a[i];
  }
  if(ss == INT_MAX) return -1;
  return ss;
}


int main() {
  int a[] = {2, 4, 7, 90, 9, 43, 21, 49};
  std::cout << "second largest: " << sec_largest(a, 8) << std::endl;
  std::cout << "second smallest: " << sec_smallest(a, 8) << std::endl;
  return 0;
}
