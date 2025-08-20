#include <iostream>
using namespace std;
int countWords(string str) {
    int count = 0;
    bool insideWord = false;
    for (char ch : str) {
        if (ch != ' ' && !insideWord) {
            insideWord = true;
            count++;
        }else if (ch == ' '){
            insideWord = false;
        }
    }
    return count;
}


int main() {
    string input;
    cout << "Enter a string: ";
    getline (cin, input);

    int wordCount = countWords(input);
    cout << "NUmber of words: " << wordCount << endl;
    return 0;
}
