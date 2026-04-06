// check whether two strings are isomorphic, return true if they are else return false.
// isomorphic => one to one mapping possible for every character of first string to every character of second string and all occurrences of every characters in first string maps to the same character in the second string.
#include<iostream>
#include<unordered_map>
using namespace std;

bool isIsomorphic(string &s1,string &s2){
  int n = s1.length();
  if(n != s2.length()) return false;
  unordered_map<char,char> map1;
  unordered_map<char,char> map2;
  for(int i = 0; i < n; i++){
    auto it1 = map1.find(s1[i]);
    if(it1 == map1.end()){
      map1[s1[i]] = s2[i];
    } else{
      if(it1 -> second != s2[i]) return false;
    }
    auto it2 = map2.find(s2[i]);
    if(it2 == map2.end()){
      map2[s2[i]] = s1[i];
    } else{
      if(it2 -> second != s1[i]) return false;
    }
  }
  return true;
}

int main (){
  string s1,s2;
  cin >> s1 >> s2;
  cout << boolalpha << isIsomorphic(s1,s2);
  return 0;
}