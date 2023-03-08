#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int Friends,Bottles,ml,Limes,Slices,Salt,NDrink,NSalt;
 
    cin>>Friends>>Bottles>>ml>>Limes>>Slices>>Salt>>NDrink>>NSalt;
 
    int TotalDrink = Bottles*ml;
    int TotalSlice = Limes*Slices;
 
    int A = TotalDrink/(NDrink*Friends);
    int B = TotalSlice/Friends;
    int C = Salt/(NSalt*Friends);
 
    cout<<min(A, min(B,C));
}