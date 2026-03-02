// Find the unique number in given array where all the elements are being repeated twice with one value being unique.

#include <iostream>
#include<vector>
using namespace std;

int main() {
  vector<int> arr = {3,2,1,4,1,3,2,4,4,5,5,4};
  int n = arr.size();

  for(int i = 0; i < n - 1; i++){
    for (int j = i + 1; j < n; j++){
      if (arr[i] == arr[j]) {
        arr[i] = arr[j] = -1;
      }
    }
  }

  int uniqueElement = -1;
 for(int i = 0; i < n; i++){
  if(arr[i] != -1){ uniqueElement = arr[i];}
 }

  cout << "Unique element is " << uniqueElement;
  return 0;
}
