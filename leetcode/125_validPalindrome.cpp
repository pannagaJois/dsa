#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(string s) {
  string x;
  for(int i=0; i<s.length(); i++)
    if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >=0 && s[i] <=9))
      x.push_back(s[i]);
  for(char &c : x)
    c = tolower(c);
  string r = x;
  reverse(r.begin(), r.end());
  if(x==r)
    return true;
  else return false;
}

int main() {
  string s = "A man, a plan, a canal: Panama";
  if(isPalindrome(s))
    cout<<"yes" << endl;
  else
    cout<<"no"<<endl;
  return 0;
}
