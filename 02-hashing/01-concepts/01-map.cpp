// Given an integer n, representing the number of elements, given n elements, Return the sum of repetitive elements.

//Input: n = 7, elements = [1,1,2,1,3,3,3].
//Output: 4 (1 + 3).

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int sumOfRepetitiveElements(vector<int> &nums,int n){
  map<int, int> sum;
  for(int i = 0; i<n; i++) {
    sum[nums[i]]++;
  }
  int ans = 0;
 for (auto ele: sum){
  if (ele.second > 1) {
    ans += ele.first;
  }
 }
 return ans;
}

int main (){
 vector<int> arr = {1,1,2,1,3,3,3};
  int n = arr.size();
  cout << sumOfRepetitiveElements(arr,n);
  return 0;
}

