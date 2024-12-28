#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1){
        return 0;//first term
    }
    if(n==2){
        return 1;//second term
    }

    return fibo(n-1)+fibo(n-2);
}

int main(){
    
    int a;
    cout<<"Enter the term you wanted to see : ";
    cin>>a;
    
    cout<<fibo(a);
    return 0;
}
