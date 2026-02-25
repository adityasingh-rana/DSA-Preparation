#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
      int temp;
      cin>>temp;
      nums.push_back(temp);
    }
    nums.insert(nums.begin()+2,1);
    for(int i = 0; i<nums.size(); i++){
      cout<< nums[i];
    }
    return 0;
}