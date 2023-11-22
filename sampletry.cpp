#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int>array{1,2,-12,0,237,-89458};
  for(int i=0  ; i<array.size()-1 ; i++){
    int midindex = i;
    for(int j=i+1 ; j<array.size() ; j++){
      if(array[j]<array[midindex]){
        midindex=j;
      }
    }
    swap(array[i],array[midindex]);
  }
  for(int i=0  ; i<array.size() ; i++){
    cout<<array[i]<<" ";
  }
}