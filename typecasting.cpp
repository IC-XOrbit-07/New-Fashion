#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>array_taken){
    for(int i=0 ; i<array_taken.size() ; i++){
        cout<<array_taken[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>sample_array;
    // sample_array.push_back(1);
    // sample_array.push_back(2);
    // sample_array.push_back(3);
    // sample_array.push_back(4);
    // printArray(sample_array);
    // sample_array.pop_back();

    for(int i=0 ; i<5 ; i++){
        int d;
        cin>>d;
        sample_array.push_back(d);
    }
    printArray(sample_array);
}