// Theory    : Stack.
// Principle : Last in First Out (LIFO).
// Operations :- push , pop , top , isempty , size.

#include <iostream>
#include <stack>

using namespace std;
int main(){
    stack<int>st;

    // Pushing element on to the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Removing top element form stack 
    st.pop();

    // Accessing top element of stack
    cout<<"Top element on stack is "<<st.top()<<endl;

    // Printing Stack
    cout<<"Size of stack is "<<st.size()<<endl;

    // Accessing elements of stack 
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}