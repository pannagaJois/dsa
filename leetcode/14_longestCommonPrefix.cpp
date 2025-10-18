#include<iostream>
#include<climits>
#include<vector>
using namespace std;

string pref(vector<string>& strs) {
  string p = "";
  int s=INT_MAX; 
  // &x because we dont want a copy of the element to be made, its wasteful
  // const because we dont want to change the elements of the vector
  for (const auto &x : strs)
    if(s>x.size())
      s=x.size();
  for(int i=0; i<s; i++) {
    char c = strs[0][i];
    for(int j=1; j<strs.size(); j++) {
      if(strs[j][i] == strs[j-1][i])
        c = strs[j][i];
      else
        return p;
    }
    p += c;
  }
  return p;
}

int main() {
  vector<string> a = {"flower", "flow", "flying"};
  cout<<pref(a)<<endl;
  return 0;
}
