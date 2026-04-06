// Find the total occurrence of x in given array.

#include<iostream>
#include<vector>
using namespace std;

int main (){
  int n;
  cout << "Enter size of the array: ";
  cin >> n;

  int key;
  cout << "Enter key: ";
  cin >> key;

  vector<int> nums(n);
  int count = 0;

  cout << "Enter elements of the array: ";
  for (int i = 0; i < n; i ++ ){
    cin >> nums[i];
    if (nums[i] == key) count++;
  }

  cout << "Number of Occurrence of " << key << " is " <<  count;
return 0;
}