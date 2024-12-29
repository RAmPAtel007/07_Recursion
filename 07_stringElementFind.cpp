#include <iostream>
#include <vector>
using namespace std;

void findElement(string& s, char& element , int i, int& n, vector<int>& ans){
    //base case 
    if(i>=n){
        // return false; //when data type is bool
        return ;
    }
    //1 case mera 
    if(element==s[i]){
        // return true;
        ans.push_back(i); //value ko store krna hai 
    }
    //baki recursion krega
    return findElement(s,element,i+1,n,ans);


}
int main(){
    string s = "Lovebabbar";
    char element  = 'b';
    int i=0;
    int n=s.length();

    vector<int> ans;

    findElement(s,element , i, n, ans);
    cout<<"printing ans: " ;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}