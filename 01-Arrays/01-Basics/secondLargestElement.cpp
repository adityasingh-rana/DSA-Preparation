// Find the Second Largest Element in the given array.
#include <iostream>
#include <vector>
using namespace std;

int largestElementIdx(vector<int> &nums){
  int max = INT16_MIN;
  int ans = 0;
  int n = nums.size();
  for(int i = 0; i < n; i++){
    if (nums[i] > max){
      max = nums[i];
      ans = i;
    }
  }
  return ans;
}

int main (){
  int n;
  cin>>n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int largest = largestElementIdx(arr);
  arr[largest] = -1;
  cout<< arr[largestElementIdx(arr)];
  return 0;
}