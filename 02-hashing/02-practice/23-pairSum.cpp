//Given an array of size n and integar x. Return indecies of a pair whose sum is equal to the x, if no pair found return -1.
// Otimized solution: Hashmap
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

pair<int,int> idxOfPairOfSum(vector<int> &nums,int x){
  unordered_map<int,int> idxMap;
  for(int i = 0; i< nums.size(); i++){
    int key = x - nums[i];
    if(idxMap.find(key) != idxMap.end()){
      return {idxMap[key],i};
    }
    idxMap[nums[i]] = i;
  }
  return {-1,-1};
}

int main (){
  vector<int> arr = {9,10,2,3,5};
  int x = 15;
  pair<int,int> p =idxOfPairOfSum(arr,x);
  if(p.first == -1 ) cout << -1;
  else{
    cout << p.first<< ", " << p.second;

  }
  return 0;
}