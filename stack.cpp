#include <iostream>
using namespace std;
#define size 5
int stack[size];
int top = -1;
void push (int num){
    if (top<size-1){
        top++;
    stack[top]=num;
    cout<<num<<"Insert"<<endl;
    }
    else {
     cout<<"stack is Overflow"<<endl;   
    }
}
int main(){
    push(3);
    push(4);
    push(5);
    push(2);
    push(1);
    push(10);
    push(11);
}
    
