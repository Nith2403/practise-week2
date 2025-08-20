#include <iostream>

using namespace std;

int main () {
    int num, sum=0;
    bool IsPrime=true;
    cout <<"Enter the number: ";
    cin >> num;

    if (num <= 1){
        IsPrime=false;
    }
    else{
        for (int i=2; i<num; i++){
            if (  num % i == 0){
                IsPrime=false;
            }
        }
    }
    if (IsPrime){
        cout<< num <<" is a Prime number";
    }
    else{
        cout<< num <<" is not a Prime number";
    }
    
    return 0;
}   