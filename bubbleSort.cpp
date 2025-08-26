#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Flag to optimize and stop early if already sorted
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no swaps happened in this pass, the array is sorted
        if (!swapped) break;
    }
}

int main() {
    int arr[] = {10, 4, 9, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubblesort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
