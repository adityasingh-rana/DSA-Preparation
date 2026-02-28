// Move all the even integers in the beginning of the give array followed by all the odd integers. The relative order of odd/even dosen't matter.
// Two pointers

#include<iostream>
#include<vector>
using namespace std;

int main (){
  vector<int> arr = {1,-2,-3,-4,5};
  int n = arr.size();
  int st = 0;
  int end = n - 1;
  while (st < end)
  {
    if(arr[st] % 2 == 0) st++;
    else if(arr[end] % 2 != 0) end--;
    else {
      swap(arr[st++],arr[end--]);
    }
  }
  for(int ele: arr){
    cout << ele << " ";
  }

  return 0;
}