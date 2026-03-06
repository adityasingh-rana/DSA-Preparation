#include<iostream>
#include<map>
using namespace std;

int main(){
  multimap<string,long long> phnDirectory;
  phnDirectory.insert(make_pair("Aditya",6306837650));
  phnDirectory.insert(make_pair("Dad",9838411348));
  phnDirectory.insert(make_pair("Dad",9451407000));

  for(auto pair: phnDirectory){
    cout << pair.first << "-" << pair.second << endl;

  }
  return 0;
}