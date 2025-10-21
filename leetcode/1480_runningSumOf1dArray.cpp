#include<iostream>
#include<vector>
using namespace std;

vector<int> run(vector<int> a) {
  vector<int> r;
  r.push_back(a[0]);
  for(int i=1; i<a.size(); i++)
    r.push_back(r[i-1]+a[i]);
  return r;
}

int main() {
  vector<int> v = {1,2,3,4,5};
  vector<int> s = run(v);
  for(int i=0; i<s.size(); i++)
    cout<<s[i]<<"  ";
  cout<<endl;
  return 0;
}
