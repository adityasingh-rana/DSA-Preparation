// Check whether two strings are anagram of each other, return true if they are else return false.
// An anagram of string is another string that contains the same characters, only the order of the characters can be different. Eg: "ABCD" => "ADBC".

#include<iostream>
#include<unordered_map>
using namespace std;

bool isAnagram(string &str1, string &str2){
  if(str1.size() != str2.size()) return false;
  unordered_map<char,int> charCount;
  for(auto ele: str1){
    charCount[ele]++;
  }
  for(auto ele: str2) charCount[ele]--;
  for(auto ele: charCount) {
    if(ele.second != 0) return false;
  }
  return true;
}

int main (){
  string str1;
  cout << "Enter String1: ";
  cin >> str1;
  string str2;
  cout << "Enter String2: ";
  cin >> str2;
  cout << boolalpha << isAnagram(str1,str2);
  return 0;
}