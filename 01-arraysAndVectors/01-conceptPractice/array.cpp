#include<iostream>
using namespace std;

int main(){
  int n = 5;
  int arr[n];
  // int max = INT16_MIN;
  // for(int &element: arr){
  //   cin>> element;
  //   if(max < element) max = element;
  // }
  // cout << max;

  cout<<"Enter key";
  int key;
  cin>>key;
  int ans = -1;
  cout << "Enter elements of array";
  for(int i = 0; i < n; i++){
    cin >> arr[i];
    if(key == arr[i]) ans = i;
  }
  cout << ans;
  return 0;
}