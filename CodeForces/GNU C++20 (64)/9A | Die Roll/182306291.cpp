#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int Y,W;
    bool flag=true;
 
    cin>>Y>>W;
 
    if( (Y == 6 || W == 6) && flag ){
        cout<<"1/6";
        flag=false;
    }
 
    if( (Y == 5 || W == 5) && flag){
        cout<<"1/3";
        flag=false;
    }
 
    if( (Y == 4 || W == 4) && flag){
        cout<<"1/2";
        flag=false;
    }
 
    if( (Y == 3 || W==3) && flag){
        cout<<"2/3";
        flag=false;
    }
    if( (Y == 2 || W == 2) && flag){
        cout<<"5/6";
        flag=false;
    }
 
    if( (Y == 1 || W == 1) && flag){
        cout<<"1/1";
        flag=false;
    }
}