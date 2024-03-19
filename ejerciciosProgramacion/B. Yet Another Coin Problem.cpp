#include<bits/stdc++.h>
 
using namespace std;
 
int coins(int n){
    int count=0;
    count+=n/15;
    n%=15;
    count+=n/6;
    n%=6;
    count+=n/3;
    n%=3;
    count+=n;
    return count;
}
 
int main(){
 
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        if(n<10){
            cout<<coins(n)<<endl;
        }else if(n<20){
            cout<<min(coins(n),coins(n-10)+1)<<endl;
        }else{
            cout<<min({coins(n),coins(n-10)+1,coins(n-20)+2})<<endl;
        }
    }
}
