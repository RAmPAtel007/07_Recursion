#include <iostream>
#include <vector>
using namespace std;

void findElement(string& s, char& element , int i, int& n, vector<int>& ans){
    //pass count for count the variable , int& count 
    
    //base case 
    if(i>=n){
        // return false; //when data type is bool
        return ;
    }
    //1 case mera 
    if(element==s[i]){
        // return true;
        ans.push_back(i); //value ko store krna hai 
        //for count 
        //count++;
    }
    //baki recursion krega
    return findElement(s,element,i+1,n,ans); //pass count into it 


}
int main(){
    string s = "Lovebabbar";
    char element  = 'b';
    int i=0;
    int n=s.length();

    vector<int> ans;
    //for count 
    // int count =0 ;

    findElement(s,element , i, n, ans);//pass count into it 
    //cout<<count<<endl;
    cout<<"printing ans: " ;
    for(auto val:ans){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}