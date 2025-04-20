#include <iostream>
#include <string>
using namespace std;

string addRE(string num1,int p1,string num2,int p2,int carry=0){
    //base case
    if(p1<0 && p2<0){
        if(carry !=0 ){
            return string(1,carry + '0');
        }
        return "";
    }

    //ek case solve
    int n1= (p1 >=0 ? num1[p1] : '0')-'0';
    int n2= (p2 >=0 ? num1[p2] : '0')-'0';
    int csum = n1 +n2 + carry;
    int digit = csum % 10;
    carry = csum / 10;
    string ans="";
    ans.push_back(digit + '0');



    //RE
    ans = ans + addRE(num1,p1-1,num2,p2-1,carry);
    return ans;
}

int main(){
    string num1 = "789";
    string num2 = "256";
    int p1;
    int p2;
    string ans = addRE(num1,p1,num2,p2);
    cout<<ans;

    
}