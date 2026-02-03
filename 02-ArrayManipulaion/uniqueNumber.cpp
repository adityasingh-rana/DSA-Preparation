#include <iostream>
using namespace std;
int main() {
  int n = 9;
  int arr[n] = {3,2,1,3,2,4,4,5,1};
  for(int i = 0; i < n; i++){
    for (int j = i+1; j < n; j++)
    {
      if(arr[i] == arr[j]){
        arr[i] = arr[j] = -1;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    if(arr[i] != -1) cout << arr[i];
  }
  return 0;
}
