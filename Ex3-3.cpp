#include <iostream>

using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n==0 || n==1)
        return n;
    int  j=0;

    for(int i=0; i<n; i++ ){
        if (arr[j] != arr[i]){
            j++;
            arr[j]=arr[i];
        
        }
    }
    return j+1 ;
}

int main() {
    int arr[]={1, 1, 2, 2, 3, 4, 4, };
    int n=sizeof(arr)/sizeof(arr[0]);

    cout << "Original: [";
    for (int i=0; i<n; i++){
        cout << arr[i];
        if(i < n-1) cout << ", ";
    }
    cout << "]" << endl;
    int newSize=removeDuplicates(arr, n);

    cout<<"Array after removing duplicates: ";
    for (int i=0; i < newSize; i++) {
        cout<< arr[i] << " " ;
    }
    cout<< "\nNew size = " << newSize << endl;

    return 0;
}