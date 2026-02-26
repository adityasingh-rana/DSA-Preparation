// Check if the array is sorted or not.

#include<iostream>
#include<vector>
using namespace std;

int main (){
  int n;
  cout << "Enter size of the array: ";
  cin >> n;

  vector<int> nums(n);
  cout << "Enter elements of the array: ";
  for (int i = 0; i < n; i ++ ){
    cin >> nums[i];
  }

  bool isSorted = true;
  for (int i = 0; i < n -1; i++){
    if ( nums[i] > nums[i+1]){
      isSorted = false;
      break;
    }
  }

  cout << boolalpha << isSorted;

return 0;
}