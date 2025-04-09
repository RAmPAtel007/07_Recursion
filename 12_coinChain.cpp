#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int solve(vector<int>& arr,int target){

    //base case
    if(target==0){
        return 0; //no of coin required to make zero coin is 0
    }
    if(target<0){
        //negative coin not possible i.e invalid 
        return INT_MAX; //maan liya infinite coin lag rha hai negative coin ko 
    }

    int mini = INT_MAX;

    // Recursive function 
    for(int i=0 ; i<arr.size() ; i++){
        int ans = solve(arr, target-arr[i]);

        if(ans!=INT_MAX){ //(mtlb ki valid state hai q ki invalid mein int max pass kiya hai base case mein)

         mini= min(mini,ans+1); //+1 because q ki tumne upper arr[i] minus kiya tha i.e 1 coin minus kr diya tha for eg target =11 , and you above found the answer for 11 due to -arr...then add +1 for 11 .
       
        }
    }
    return mini;
}

int main(){
    vector<int> arr{1,2};
    int target =5 ;


    int ans = solve(arr,target);
    cout<<"Answer is : "<<ans<<endl;
    return 0;


}