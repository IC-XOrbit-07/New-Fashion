#include<iostream>
#include<map>

using namespace std;

int main(){
  map<string  , int> map1;
  pair<string , int >p = make_pair("Fcorpio",10);
  map1.insert(p);

  pair<string , int >p1("Fortuner",11);
  map1.insert(p1);

  map1["Faruti"] = 12;

  // cout<< map1.find("Maruti");
  // cout<<map1.count("Hello");
  // if(map1.find("Maruti") != map1.end()){
  //   cout<<"Found!!!!!";

  // }
  // else{
  //   cout<<"Not Found !!!!!!";
  // }
  for(auto i :map1){
    cout<<i.first<<"->"<<i.second<<endl;
  }
}