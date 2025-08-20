#include<iostream>
using namespace std;
void countFrequency(string str){
    for(int i=0; i<str.length() ; i++){
        bool counted = false;
        for(int j=0; j<i; j++){
            if(str[i] == str[j]){
                counted = true;
                break;

            }
        }
        if(!counted){
            int count =0;
            for(int j=0; j<str.length(); j++){
                if(str[i]==str[j]){
                    count++;
                }

            }
            cout<<str[i]<<":"<<count<<endl;
        }
    }
}
int main(){
    string input;
    cout<<"Enter a string :";
    getline(cin,input);

    cout<<"Character frequencies: "<<endl;   
    countFrequency(input);
    return 0;
}