#include <bits/stdc++.h>
 
using namespace std;
 
bool parity(vector<int> a){
 int p = a.size(), odd_counter=0, even_counter=0;
 
 for(int i=0; i<p; i++){
  if(a[i]%2 == 0){
   even_counter++; 
  }else odd_counter++;
 }
 
 if(odd_counter==p || even_counter==p){
  return true;
 }else return false;
}
 
string answer(vector<int> a){
 int p = a.size();
 
 if(parity(a) == true) return "Yes";
 
 for(int i=0; i<p; i+=2) a[i]++;
 
 if(parity(a) == true){
  return "Yes";
 }else{
  return "No";
 }
}
 
int main (){
 int t,n; 
 
 do{
  cin>>t;
 }while(t < 1 || t > 100);
 
 vector<string> results(t);
 
 for(int i=0; i<t; i++){
  do{
   cin>>n;
  }while(n < 2 || n > 50);
  
  vector<int> a(n);
  
  for(int j=0; j<n; j++){
   do{
    cin>>a[j];
   }while(a[j]<1 || a[j]>1000);
  }
  
  results[i]=answer(a);
  
  if(i == (t-1)){
   for(int r=0; r<t; r++){
    cout<<results[r]<<"\n";
   }
  }
 }
}