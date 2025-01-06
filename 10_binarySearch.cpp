#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &arr, int s , int e , int target){
    int mid=(s+e)/2;
    //base case
    if(s>e){//invalid array
        return -1; //key not found;
    }
    if(arr[mid]==target){
        return mid; //key found
    }

    //1 case solve

    //arr[mid]<key right m search
    if(arr[mid]<target){
        return binarySearch(arr,mid+1,e,target);
    }
    else{
        //arr[mid]>key left me search
        return binarySearch(arr,s,mid-1,target);

    }
}

int main(){
    vector<int> v{10,20,30,40,50};
    int s=0;
    int n= v.size();
    int e = n-1;
    int target=50;
    

    int ans=binarySearch(v,s,e,target);
    cout<<"Answer is  :" <<ans<<endl;

    return 0;


}