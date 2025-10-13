#include<iostream>
#include<vector>

// here the parameter is &a, but this is not address of a
// its a reference. its an alias.

void merge(std::vector<int>& a, int low, int mid, int high) {
  std::vector<int> t;
  int left=low, right=mid+1;
  while (left <= mid && right <= high) {
    if(a[left] <= a[right]) {
      t.push_back(a[left]);
      left++;
    }
    else {
      t.push_back(a[right]);
      right++;
    }
  }
  while(left <= mid) {
    t.push_back(a[left]);
    left++;
  }
  while(right <= high) {
    t.push_back(a[right]);
    right++;
  }
  for(int i=low; i <= high; i++)
    a[i] = t[i-low];
}

void merge_sort(std::vector<int> &a, int low, int high) {
  if(low >= high) return;
  int mid = (low+high)/2;
  merge_sort(a, low, mid);
  merge_sort(a, mid+1, high);
  merge(a, low, mid, high);
}

int main() {
  std::vector<int> a = {1,4,3,2,6,5};
  merge_sort(a, 0, 5);

  for(int i=0; i<6; i++)
    std::cout << a[i] << " ";
  std::cout << std::endl;
  return 0;
}
