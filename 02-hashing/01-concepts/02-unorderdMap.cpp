#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
  unordered_map<int,string> record;
  record.insert(make_pair(1,"Aditya"));
  record[2] = "Ansul";
  record[3] = "Ansh";
  record[5] = "Shivansh";
  record[4] = "Raj";
  record.insert(make_pair(3,"Sundaram"));
  for(auto pair: record){
    cout << pair.first << "-" << pair.second << endl;
  }
  return 0;
}