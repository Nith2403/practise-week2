#include <iostream>
using namespace std;
int findmax (int array[], int size) {
        int max = array[0];             // Initialize max with the first element
        for (int i=1; i <size; i++){    // Start from the second element
            if (array[i] > max){        // Compare each element with current max
                max = array[i];         // Update max if a larger value is found
            }
        }
    return max;
}
int main() {
    int array[] = {23, 45, 12, 67, 34};
    int size = sizeof(array)/sizeof(array[0]);  //calulate the element of the array
    int max = findmax(array,size);          //call the function findmax

    cout << "array: {23, 45, 12, 67, 34}" << endl;
    cout << "Maximum element: " <<max << endl;
    return 0;
}

