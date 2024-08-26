/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;

void moveNonZeroToFront(int a[], int low, int high) {
    if (low == high) 
    return; // Base case: single element
    int mid = (low + high) / 2;
    // Recursively process the left and right halves
    moveNonZeroToFront(a, low, mid);
    moveNonZeroToFront(a, mid + 1, high);
    // Combine: Move non-zero elements to the front
    int temp[high - low + 1];
    int k = 0;
    for (int i = low; i <= high; i++) {
        if (a[i] != 0) {
            temp[k++] = a[i];
        }
    }
    while (k <= high - low) {
        temp[k++] = 0;
    }
    // Copy back to the original array
    for (int i = 0; i < high - low + 1; i++) {
        a[low + i] = temp[i];
    }
}
int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    moveNonZeroToFront(a, 0, n - 1);
    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}