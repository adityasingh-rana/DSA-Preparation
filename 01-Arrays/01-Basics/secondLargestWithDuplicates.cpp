// Find the Second Largest Element in the given array if duplicates are also present in inputs.
// Array manipulation.

#include <iostream>
#include <vector>
using namespace std;

// Brute Force:

// int largestElementIdx(vector<int> &nums){
//   int max = INT16_MIN;
//   int ans = 0;
//   int n = nums.size();
//   for(int i = 0; i < n; i++){
//     if (nums[i] > max){
//       max = nums[i];
//       ans = i;
//     }
//   }
//   return ans;
// }

// int main (){
//   int n;
//   cin>>n;
//   vector<int> arr(n);
//   for (int i = 0; i < n; i++)
//     cin >> arr[i];
//   int largestIdx = largestElementIdx(arr);
//   int largestEle = arr[largestIdx]; // first largest element.
//   for (int i = 0; i < n; i++){
//     if (arr[i] == largestEle) arr[i] = -1;
//   } // checking for duplicates and asigning them value -1.
//   cout<< arr[largestElementIdx(arr)]; // second largest element.
//   return 0;
// }

// optimized:

int largestElement(vector<int> &nums){
  int maxEle = INT16_MIN;
  int n = nums.size();
  for(int i = 0; i < n; i++){
    if (nums[i] > maxEle){
      maxEle = nums[i];
    }
  }
  return maxEle;
}

int secondLargestElement(vector<int> &nums, int maxEle){
  int secondMax = INT16_MIN;
  int n = nums.size();
  for(int i = 0; i < n; i++){
    if (nums[i] > secondMax && nums[i] != maxEle){
      secondMax = nums[i];
    }
  }
  return secondMax == INT16_MIN ? -1: secondMax;
}

int main (){
  int n;
  cin>>n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << secondLargestElement(arr,largestElement(arr));// second largest element.
  return 0;
}