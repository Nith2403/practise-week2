#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string str){
    reverse(str.begin(), str.end());
    return str;
}

int main() {
    string input;

    cout<<"Enter a string: ";
    getline(cin, input);
    string reversed=reverseString(input);

    cout<< "Reverse string: " << reversed <<endl;

    return 0;
}