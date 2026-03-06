#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
  unordered_multimap<int,string> record;
  record.insert(make_pair(1,"Aditya"));
  record.insert(make_pair(1,"Adi"));
  record.insert(make_pair(3,"Adit"));
  record.insert(make_pair(2,"Aditya"));

  for(auto pair: record){
    cout <<"Roll no: " << pair.first << endl;
    cout << "Name: " << pair.second << endl << endl;
  }

  return 0;
}