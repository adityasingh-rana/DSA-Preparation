// Find the last occurrence of x in given array.

#include<iostream>
#include<vector>
using namespace std;

int main (){
  int n;
  cout << "Enter size of the array:";
  cin >> n;

  vector<int> nums(n);

  cout << "Enter key:";
  int x;
  cin >> x;

  cout << "Enter elements of the array:";
  for(int &element: nums){
    cin>>element;
  }

  int ans = -1;

  // for (int i = 0; i < nums.size(); i++)
  // {
  //   if (x == nums[i]) ans = i;
  // }

  for (int i = nums.size() - 1; i >= 0; i--)
  {
    if (nums[i] == x){
      ans = i;
      break;
    }
  } // Optimized solution.

  cout << "Last occurrence index of key element is " << ans;
  return 0;
}