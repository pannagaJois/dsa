#include<iostream>
void move(int a[], int n) {
  int t[n];
  int c=0;
  for(int i=0; i<n; i++) {
    if(a[i] != 0)
      t[i-c] = a[i];
    else
      c++;
  }
  for(int j=n-c;j<n;j++)
    t[j] = 0;
  for(int i=0; i<n; i++)
    a[i] = t[i];
}

void move1(int a[], int n) {
  int j=-1;
  for(int i=0; i<n; i++)
    if(a[i] == 0) {
      j=i;
      break;
    }
  if(j==-1) return;
  // i is pointing to all the elements of the array
  // j is pointing to index containing zero
  for(int i=j+1;i<n;i++) {
    if(a[i] != 0) {
      std::swap(a[i], a[j]);
      j++;
    }
    }
}

int main() {
  int a[] = {1,0,9,0,7,0,6,0,0,0,3};
  move1(a,11);
  for(int i=0; i<11; i++)
    std::cout<<a[i] << "  ";
  std::cout<<std::endl;
  return 0;
}
