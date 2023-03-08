#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
 int M,N,D=0;
 
 do{
  cin>>M>>N;
 }while( M < 1 || M > 16 || N  < 1 || N > 16);
 
 D += (M/2)*N;
 if( (M%2) == 1) D+= (N/2);
 
 cout<<D;
}