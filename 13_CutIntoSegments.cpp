#include <iostream>
#include <limits.h>
using namespace std;
int solve(int n, int x, int y, int z){
    //base case
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }

    //recursive fxn 
    int ans1=solve(n-x,x, y,z)+1;
    int ans2=solve(n-y,x, y,z)+1;
    int ans3=solve(n-z,x, y,z)+1;

    return max(ans1,max(ans2,ans3)); //return maximum no of segment 
}

int main(){
    int N=7;
    int x=5;
    int y=2;
    int z=2;

    int ans=0;
    if(ans<0){
        ans=0;
    }
     
    ans=solve(N,x,y,z);
    cout<<"ans is : "<<ans;


}