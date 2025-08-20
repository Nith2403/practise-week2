#include<iostream>
using namespace std;
long factorial(int n){
    int result=1;
    
    for(int i=1; i<=n; i++){
         result = result*i;
    }
   
    return result;
}
int main(){
    int n;
    cout<< "Enter n : ";
    cin>>n; 

    int fac =factorial(n);
    cout<<fac;

}