#include<iostream>
using namespace std;
int fun(int n){
    if(n==1 || n==2) return 1;
    return fun(n-1)+fun(n-2);
}
int main(){
  int n;
  cout<<"enter n ; ";
  cin>>n;
  int ans = fun(n);
  cout<<ans;
}
