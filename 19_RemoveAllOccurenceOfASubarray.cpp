#include <iostream>
using namespace std;

void occurence(string& s,string& part){
    int found = s.find(part);
    if(found!= string ::npos){ // condition means if the substring was found
        //npos is a special constant in C++ that represents "no position" or "not found".
        //part string has been located 
        //please remove it this is the one case 
        string left=s.substr(0,found);
        string right=s.substr(found+part.size(),s.size());
        s= left+right;

        occurence(s,part);
    }
    else{
        //base case 
        //all the occurence has been removed 
        return;
    }

}


int main(){
    string str="daabcbaabcbc";
    string part="abc";
    
    
    occurence(str,part);
    cout<<str;
  
}


