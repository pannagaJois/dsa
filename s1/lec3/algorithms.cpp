#include<iostream>
#include<string>
#include<algorithm>

int main (int argc, char *argv[]) {
  
  // sorting
  int n = 5; // length
  int a[n] = {1, 5, 4, 3, 2};

  std::sort(a, a+n); // sorts in ascending order

  // sort(v.begin(), v.end()); - for vectors
  
  std::sort(a+1, a+4); // sorts only on the given range
  
  std::sort(a, a+n, std::greater<int>()); // sorts in descending order

  // sort(a, a+n, comparator); - for sorting according to a required undefined way
  // comparator is a boolean function

  int c = __builtin_popcount(n); // returns the number of 1's in its binary form
  long long x = 4567876543456789876;
  int c1 = __builtin_popcountll(x);

  std::string s = "123";

  do { // prints all the possible permutations 
    std::cout << s << std::endl;
  } while(next_permutation(s.begin(), s.end()));

  int max = *std::max_element(a, a+n);
  return 0;
}
