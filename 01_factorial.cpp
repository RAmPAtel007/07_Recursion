#include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n==1){
        return 1;
    }

    return n * factorial(n-1); //relation
}

int main(){
    int a;
    cout<<"Enter the number to find the factorial : ";
    cin>>a;
    
    cout<<factorial(a);
    return 0;
}