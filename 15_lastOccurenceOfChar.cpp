#include <iostream>
#include <string>
using namespace std;

void LastOccurence(string&str,char ch, int i,int&ans){
    //base case
    
    if(i>=str.size()){
        return;
    }

    //ek case 
    if(str[i]==ch){
        ans=i;

    }

    LastOccurence(str,ch,i+1,ans);
}

int main(){
    string str;
    cin>>str;
    char ch;
    cin>>ch; 
    
    int ans=-1;
    LastOccurence(str,ch,0,ans);
    cout<<ans;



}