#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int> nums(n);
    for(int i = 0; i<n; i++){
      cin >> nums[i];
      // int temp;
      // cin>>temp;
      // nums.push_back(temp);
    }
    // nums.insert(nums.begin()+2,1);
    // for(int i = 0; i<nums.size(); i++){
    //   cout<< nums[i];
    // }

    // nums.pop_back();
    // nums.erase(nums.end()-2);
    // nums.erase(nums.begin()+2);

    // for(int i = 0; i<nums.size(); i++){
    //   cout<< nums[i] << " ";
    // }

    for(int element: nums){
      cout << element << " ";
    }
    return 0;
}