// Find the total number of pairs in the array whose sum is equal to given value x.
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

  int pairs = 0;
  for ( int i = 0; i < n - 1; i++){
    for (int j = i + 1; j < n; j++){
      if (nums[i] + nums[j] == targetSum) pairs++;
    }
  }
  cout << pairs;
return 0;
}
