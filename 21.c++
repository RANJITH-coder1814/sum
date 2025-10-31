#include<iostream>
using namespace std;
int amin(){
    int n,r,m,sum=0;
    cout<<"enter n :";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }
    if(sum==m){
        cout<<"its a amstrong";
    }    
    else{
         cout<<"its not a amstrong";
    }
    return 0; 
}