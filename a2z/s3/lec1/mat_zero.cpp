#include<iostream>
#include<vector>
using namespace std;

void zero(vector<vector<int>> &a, int r, int c) {
  vector<pair<int, int>> p;
  for(int i=0; i<r; i++)
    for(int j=0; j<c; j++)
      if(a[i][j] == 0)
        p.push_back({i,j});
  for(auto i : p) {
        for(int x=0; x<r; x++)
          a[x][i.second] = 0;
        for(int y=0; y<c; y++)
          a[i.first][y] = 0;
  }
}

void zero1(vector<vector<int>> &a, int r, int c) {
  bool fc = false, fr = false;
  for(int i=0; i<r; i++)
    if(a[i][0] == 0) fc = true;
  for(int i=0; i<c; i++)
    if(a[0][i] == 0) fr = true;
  for(int i=1; i<r; i++)
    for(int j=1; j<c; j++)
      if(a[i][j] == 0)
        a[i][0] = a[0][j] = 0;

  for(int i=1; i<c; i++)
    if(a[0][i] == 0)
      for(int j=1; j<r; j++)
        a[j][0] = 0;
  for(int i=1; i<r; i++)
    if(a[i][0] == 0)
      for(int j=1; j<c; j++)
        a[0][j] = 0;
  if(fr)
    for(int i=0; i<c; i++)
      a[0][i] = 0;
  if(fc)
    for(int i=0; i<r; i++)
      a[i][0] = 0;

}
int main() {
  vector<vector<int>> a = {{1,1,1}, {1,1,1},{1,0,1}};
  zero1(a,3,3);
  
  for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++)
      cout<<a[i][j]<<"  ";
  cout<<endl;
  }
  return 0;
}
