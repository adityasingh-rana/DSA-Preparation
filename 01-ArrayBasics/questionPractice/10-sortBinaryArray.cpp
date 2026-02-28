// Sort an array consisting of only 0s and 1s.
// Two pointers.

#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> arr = {1,0,0,1,1,1};
  int n = arr.size();
  int i=0, j = n - 1;
  while (i<j)
  {
    if(arr[i] == 0) i++;
    else if(arr[i] == 1 && arr[j] == 0){
      swap(arr[i],arr[j]);
      j--;
      i++;
    }
    else if(arr[j]==1) j--;
  }
  for (int ele: arr){
    cout << ele << " ";
  }
  return 0;
}