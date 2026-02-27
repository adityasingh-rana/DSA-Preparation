// Rotate the given array by "k" steps, where k is non-negative. Note: k can be greater than 'n' as well, where n is the size of the array.
#include <iostream>
#include <vector>
#include <algorithm> // for reverse function.
using namespace std;

// BruteForce:

// void rotateArr(vector<int> &nums, int k){
//   int n = nums.size();
//   if (n == 0) return;
//   k = k % n;
//   int rotation = 1;
//   while (rotation <= k){
//     int temp = nums[n-1];
//     for(int i = n-1; i >= 1; i--){
//         nums[i] = nums[i - 1];
//     }
//     nums[0] = temp;
//     rotation++;
//   }
// }

// using reverse operation:

int main() {
  vector<int> arr = {1,2,3,4,5};
  int k = 3;
  int n = arr.size();
  if (n == 0) {
    cout << "Array is empty";
    return 0;
  }
  k = k % n;
  // rotateArr(arr,k);
  reverse(arr.begin(),arr.end());
  reverse(arr.begin(),arr.begin() + k);
  reverse(arr.begin() + k, arr.end());

  for(int i = 0; i < arr.size(); i++){
    cout << arr[i] << " ";
  }
  return 0;
}