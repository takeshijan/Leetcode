#include<iostream>


using namespace std;

int main(){
    
    string str1,str2;
    cin>>str1>>str2;
    cout<< ((str1 + str2 == str2 + str1) ? str1.substr(0, gcd(str1.size(),str2.size())) : " ");
}