#include <iostream>
#include <limits.h>
using namespace std;

class Stack{
    public:
        int *arr;
        int top , size;
        Stack(int size){
            arr = new int[size];
            this-> size = size;
            top  =-1;
        }

        // functoions
        void push(int data){
            if(size - top > 1){
                top++;
                arr[top] = data;
            }
            else{
                cout<<"Stack overflow";
            }
        }
        int pop(){
            if(top ==-1){
                cout<<"UnderFlow Occur";
            }
            else{
                // int sample = arr[top];
                top--;
                // return sample;
            }
        }

        int getTop(){
                if(top ==-1){
                    cout<<"No elements in the stack";
                }
                else{
                    return arr[top];
                }
        }

        int getSize(){
            return top+1;  
        }

        bool isempty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    /*Your Code Goes here*/
    
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // int ele = s.pop();
    // cout<<ele<<endl;
    while(!s.isempty()){
        cout<<s.getTop()<<endl;
        s.pop();
    }
    return 0;
}