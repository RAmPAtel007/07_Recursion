#include <iostream>

#include <climits>
using namespace std;

void printMax(int arr[], int n, int i, int& maxi){
    //base case
    if(i>=n){
        return; //array agra khtm he ho gya hai 
    }
    //1 case solve kro
    if(arr[i]> maxi){
        maxi=arr[i];
    }  

    printMax(arr,n, i+1, maxi);

}
int main(){
    
    int arr[]={100,44,0,565,0,56,05,6,5,0,6};
    int n=11; 
    int i=0;
    int maxi =INT_MIN;
    printMax(arr,n,i, maxi);
    cout<<"answer is :"<<maxi<<endl;
     
}
