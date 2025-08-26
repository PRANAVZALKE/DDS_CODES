#include <iostream>
using namespace std;
void selectionsort(int arr [], int n){
    for ( int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i++; j < n; j++){
            if(arr[i] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap (arr[i], arr[minIndex]);
    }
}
int main() {
int arr[] = {10,4,9,6,3};
int n = sizeof(arr) / sizeof(arr[0]);
selectionsort(arr, n);
for(int i =0; i < n; i++){
    cout << arr[i] << " " ;
}
   
}
