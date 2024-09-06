#include<iostream>
using namespace std;
int fun(int sr,int sc,int er,int ec,string s){
   if(sc>ec || sr>er) return 0;
   if(sc==ec && sr==er){
    cout<<s<<endl;
      return 1;
   }
   int rw = fun(sr+1,sc,er,ec,s+'D');
   int col = fun(sr,sc+1,er,ec,s+'R');
   return rw+col;
}
// void print(int sr,int sc,int er,int ec,string s){
//    if(sc>ec || sr>er) return;
//    if(sr==er && sc==ec){
//       cout<<s<<endl;
//    }
//    print(sr+1,sc,er,ec,s+'D');
//    print(sr,sc+1,er,ec,s+'R');

// }
int main(){
 cout<<fun(0,0,3,3,"")<<endl;
}