// //without recursion 

// class Solution {
//     public:
//         int maxProfit(vector<int>& arr) {
//             int mini =INT_MAX;
//             int maxProfit =0;
//             for(int i=0 ;i<arr.size();i++){
//                 if(arr[i]<mini){
//                     mini=arr[i];  
//                 }   
//                 else{
//                     int profit=arr[i]-mini;
//                     if(profit>maxProfit){
//                         maxProfit=profit;
//                     }
//                 }
//             }
//             return maxProfit;
//         }
       
//     };

#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int maxProfit(vector<int>& vec,int i, int mini , int maxprofit){
    
    //base case 
    if(vec.size()==i){
        return maxprofit;
    }
    

    // for(int i=0 ; i<vec.size(); i++){
    //     if(vec[i]<mini){
    //         mini=vec[i];
    //     }
    //     else{
    //         int profit=vec[i]-mini;
    //         if(profit>maxprofit){
    //             maxprofit=profit;
    //         }
    //     }
    // }
    // return maxProfit(vec,i+1,mini,maxprofit); 
     // Update mini (min price seen so far)
     mini = min(mini, vec[i]);

     // Calculate profit if we sell today
     int profit = vec[i] - mini;
 
     // Update maxprofit if this is the best so far
     maxprofit = max(maxprofit, profit);
 
     // Recursive call for the next index
     return maxProfit(vec, i + 1, mini, maxprofit);
}

int main(){
    vector<int> vec{7,1,5,3,6,4};
    int mini =INT_MAX;
    int ans = maxProfit(vec,0,mini,0) ;
    cout<<ans;
}