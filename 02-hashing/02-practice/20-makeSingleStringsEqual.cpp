// Given and array of string. You can move any number of characters from one string to any other string any number of times. you just have to make all them equal.
// If every string in the array is equal return YES else return NO.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string isMakeStringPossible(vector<string> &strings)
{
  int n = strings.size();
  unordered_map<char, int> charFreq;
  for (int i = 0; i < n; i++)
  {
    for (auto &ele : strings[i])
    {
      charFreq[ele]++;
    }
  }
  for (auto &pair : charFreq)
  {
    // cout << pair.first<< " - " << pair.second << "=>" << pair.second % n << endl;
    if (pair.second % n != 0)
      return "NO";
  }
  return "YES";
}

int main()
{
  vector<string> arr1 = {"collegeee", "coll", "collegge"}; // 0 => c-1,o-1,l-2,e-4,g-1; 1 => c-1,o-1,l-2,e-0,g-0; 2 => c-1,o-1,l-2,g-2,e-2;
  cout << isMakeStringPossible(arr1) << endl;
  return 0;
}