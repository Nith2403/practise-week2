#include <iostream>
using namespace std;

void rotateLeft(int arr[], int n, int positions) {
    positions = positions % n; 

    for (int p = 0; p < positions; p++) {
        int first = arr[0]; 
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        arr[n - 1] = first; 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int positions;

    cout << "Enter positions: ";
    cin >> positions;

    cout << "Original: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    rotateLeft(arr, n, positions);

    cout << "Result after rotating left by " << positions << " positions: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}
