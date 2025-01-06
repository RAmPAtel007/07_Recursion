#include <iostream> 
#include <vector>

using namespace std;

bool checkSorted(vector<int> &v, int& n , int i){
    //base case
    if(i==n-1){
        return true;
    }
    //1 case solvr krna hai 
    if(v[i+1]<v [i]){
        return false;
    }
    

    return checkSorted(v,n,i+1);

}

int main(){
    vector<int> v{10,20,30,70,100,500};
    int n=  v.size();
    int i=0;

    bool isSorted = checkSorted(v,n,i);
    if(isSorted){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }
    return 0 ;
}