#include<iostream>
using namespace std;
int path(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sc==ec && sr==sc) return 1;
    int rightway = path(sr,sc+1,er,ec);
    int downway = path(sr+1,sc,er,ec);
    return rightway+downway; 
}
void print(int sr,int sc,int er,int ec,string s){
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec){
        cout<<s<<endl;
        return;
    }
    print(sr,sc+1,er,ec,s+'R');
    print(sr+1,sc,er,ec,s+'D');
}
int main(){
    cout<<"Total Path : "<<path(0,0,3,3)<<endl;
    cout<<"possible combination : "<<endl;
    print(0,0,3,3,"");
}