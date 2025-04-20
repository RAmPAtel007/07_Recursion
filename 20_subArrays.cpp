#include <iostream>
#include <vector>
using namespace std;

void printsubArray_Util(vector<int>& nums,int start,int end){
    //base case 
    if(end>nums.size()-1){
        return;
    }


    //1 case 
    for(int i=start; i<=end;i++){
        cout<<nums[i];
    }
    cout<<endl;

    //recursuion 
    printsubArray_Util(nums,start,end+1);

}

void printsubArray(vector<int>& vec){
    for(int start=0; start<vec.size();start++){
        int end=start;
        printsubArray_Util(vec,start,end);
    }
}

int main(){
    vector<int> vec{1,2,3,4,5};
    printsubArray(vec);
    return 0;

}