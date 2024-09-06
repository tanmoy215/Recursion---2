#include<iostream>
using namespace std;
int maze(int row,int col){
    if(row==1 && col==1) return 1;
    if(row<1 || col<1) return 0;
    int rightway = maze(row,col-1);
    int downway = maze(row-1,col);
    return rightway+downway;
}
void maze1(int row,int col,string s){
  if(row==1 && col==1){
    cout<<s<<endl;
    return;
  }
  if(row<1 || col<1) return;
  maze1(row-1,col,s+'D');
  maze1(row,col-1,s+'R');
}

int main(){
    cout<<"Total path : "<<maze(3,4)<<endl;
    cout<<"Possible Combination : "<<endl;
    maze1(3,4,"");
}