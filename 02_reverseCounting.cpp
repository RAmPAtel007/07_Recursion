#include <iostream>
using namespace std;

void revCount(int n ){
    if(n==0){ //base case
        return ;
    }
    cout<<n <<" "; //processing 
    revCount(n-1);//recursive function 
}

int main(){
    int a;
    cout<<"Enter the number to find the revCount : ";
    cin>>a;
    
    revCount(a);
    return 0;
}