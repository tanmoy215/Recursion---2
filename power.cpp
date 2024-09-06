#include<iostream>
using namespace std;
int power(int n,int p){
    if(p==1) return n;
    if(p%2==0){
    int ans = power(n,p/2);
    return ans*ans;
    }
    else{
        int ans  = power(n,p/2);
        return ans*ans*n;
    }
}
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    int p;
    cout<<"enter power : ";
    cin>>p;
    int hel = power(n,p);
    cout<<"Final Ans is : "<<hel;
}
