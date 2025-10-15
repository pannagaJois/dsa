#include<iostream>
#include<set>
#include<vector>
#include<map>
using namespace std;

set<int> union1(int a1[], int a2[], int m, int n) {
  set<int> s(a1, a1+m);
  s.insert(a2, a2+n);
  return s;
}

vector<int> union2(int a1[], int a2[], int m, int n) {
  vector<int> v;
  int i=0, j=0;
  while(i<m && j<n) {
    if(a1[i] > a2[j]) {
      if (v.empty() || v.back() != a2[j])
        v.push_back(a2[j]);
      j++;
    }
    else if(a1[i] < a2[j]) {
      if (v.empty() || v.back() != a1[i])
        v.push_back(a1[i]);
      i++;
    }
    else if(a1[i] == a2[j]) {
      if (v.empty() || v.back() != a1[i])
        v.push_back(a1[i]);
      i++;
      j++;
    }
  }
  while(i<m) {
    if (v.empty() || v.back() != a1[i])
      v.push_back(a1[i]);
    i++;
  }
  while(j<n) {
    if (v.empty() || v.back() != a2[j])
      v.push_back(a2[j]);
    j++;
  }
  return v;
}

vector<int> union3(int a1[], int a2[], int m, int n) {
  map<int, int> freq;
  vector<int> v;
  for(int i=0; i<m; i++)
    freq[a1[i]]++;
  for(int i=0; i<n; i++)
    freq[a2[i]]++;
  for(auto i : freq)
    v.push_back(i.first);
  return v;
}

int main() {
  int a1[] = {1,1,2,4,5,6,6,7,9};
  int a2[] = {1,2,3,4,5,5,5,6,7,8,9,10};
  set<int> s = union1(a1, a2, 9, 12);
  for(auto i : s)
    cout << i << "  ";
  cout << endl;

  vector<int> v1 = union2(a1, a2, 9, 12);
  for(auto i : v1)
    cout << i << "  ";
  cout << endl;
  vector<int> v2 = union3(a1, a2, 9, 12);
  for(auto i : v2)
    cout << i << "  ";
  cout << endl;
 return 0;
}
