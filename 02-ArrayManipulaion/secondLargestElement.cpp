#include <iostream>
using namespace std;

int largestElementIdx(int arr[],int n){
  int max = INT8_MIN;
  int ans = 0;
  for(int i = 0; i < n; i++){
    if (arr[i] > max){
      max = arr[i];
      ans = i;
    }
  }
  return ans;
}

int main (){
  int n;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int largest = largestElementIdx(arr,n);
  arr[largest] = -1;
  cout<< arr[largestElementIdx(arr,n)];
  return 0;
}