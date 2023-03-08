#include <bits/stdc++.h>
 
using namespace std;
 
int x,steps; 
 
void count_steps (int positions){
 while(x >= positions){
  steps++;
  x -= 5;
 }
}
 
int main () {
 do{
  cin>>x;
 }while(x < 1 || x > 1000000);
 
 for(int i=5; i>0; i--) count_steps(i);
 
 cout<<steps;
}