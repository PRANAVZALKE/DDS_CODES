#include <iostream>
using namespace std;
int main() {
    int arr[]={2,5,6,10,20};
    int val = 10;
    int index = -1;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        if(arr[i]==val){
            index = i;
            break;
    }}
    if(index == -1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found at Index = "<<index<<endl;
    }}
