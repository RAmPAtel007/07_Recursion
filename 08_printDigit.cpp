#include <iostream>
using namespace std;

int printDigits(int n){
    if(n==0){ 
        return 0;
        } //base class 

   
   
    //recursion fxn
    printDigits(n/10);

     // 1 case mera 
    int digit = n%10;
    cout<<digit <<" ";
}
int main(){
    int n=345;
    printDigits(n);
    return 0;

}