#include <iostream>
#include <vector>
using namespace std;
int main() {
  int targetSum = 5;
  int arr[5] = {3,4,6,7,1};
  int i = 0;
  int count = 0;
  while (i<5)
  {
    for (int j = i+1; j < 5; j++)
    {
      if(arr[i] + arr[j] == targetSum) count++;
    }
    i++;
  }
  cout << count;
  return 0;
}
