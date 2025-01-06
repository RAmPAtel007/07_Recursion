#include <iostream>
using namespace std;

void printSubsequence(string str, string output, int i){
    //base case (BC m always return krna padta hai)
    if(i>=str.length()){
        cout<<output<<endl;
        return;
    }

    //exclude 
    printSubsequence(str , output , i+1);
    //exclude wale m o/p toh as it is thi , or next case k liye i+1

    //include 

    // output.push_back(str[i]);

    // output wale string m current charcter ko include krna padega 

    // or
    output = output + str[i];
    
    //above line is responsible for concatenation of output string ans ith character of str string 
    printSubsequence(str, output , i+1);

}

int main(){
    string str = "abc";
    string output = "";
    int i=0;
    printSubsequence(str, output , i);
    return 0;
}