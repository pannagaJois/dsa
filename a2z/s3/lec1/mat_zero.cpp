#include<iostream>
#include<vector>
using namespace std;

void zero(vector<vector<int>> &a, int r, int c) {
  for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
      if(a[i][j] == 0) {
        for(int x=0; x<i; x++)
          a[x][j] = 0;
        for(int y=0; y<j; y++)
          a[i][y] = 0;
      }
  return 0;
}

int main() {
  vector<vector<int>> a = {{1,1,1}, {1,0,1},{1,1,1}};
  zero(a,3,3);
  
  for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
      cout<<a[i]<"  ";
  cout<<endl;
  return 0;
}
