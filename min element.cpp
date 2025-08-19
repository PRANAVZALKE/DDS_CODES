#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int arr[] = {10,40,30,20,40}, n = 5;
   int*p = min_element(arr , arr + n);
    cout << *p << " " << p - arr << "\n";
}
