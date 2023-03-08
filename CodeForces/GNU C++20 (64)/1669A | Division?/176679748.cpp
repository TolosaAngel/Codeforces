#include <bits/stdc++.h>
 
using namespace std;
 
int classify (int rating){
 if (rating >= 1900){
  return 1;
 }else if(rating <= 1899 && rating >= 1600){
  return 2;
 }else if(rating <= 1599 && rating >= 1400){
  return 3;
 }else{
  return 4;
 }
}
 
int main() {
 int t, rating;
 
 do{
  cin>>t;
 }while(t<1 || t>10000);
 
 vector<int> divisions(t);
 
 for(int i=0; i<t; i++){
  do{
   cin>>rating;
  }while(rating<-5000 || rating>5000);
  
  divisions[i] = classify(rating);
 }
 
 for(int j=0; j<t; j++) cout<<"Division "<<divisions[j]<<"\n";
}