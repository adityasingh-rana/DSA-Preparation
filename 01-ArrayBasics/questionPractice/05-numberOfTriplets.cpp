// Find the total number of Triplets in the array whose sum is equal to given value x.
// TargetSum Problem.
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  cout<< "Enter size of the array: ";
  cin >> n;

  vector<int> nums(n);
  cout<< "Enter elements: ";
  for (int i = 0; i < n; i++){
    cin >> nums[i];
  }

  int targetSum;
  cout << "Enter targetSum: ";
  cin >> targetSum;

  int triplets = 0;
  for ( int i = 0; i < n - 2; i++){
    for (int j = i + 1; j < n -1; j++){
      for( int k = j + 1; k < n; k++) {
        if (nums[i] + nums[j] + nums[k] == targetSum) triplets++;
      }
    }
  }
  cout << triplets;
  return 0;
}