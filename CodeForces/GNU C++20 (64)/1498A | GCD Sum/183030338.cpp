#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long intl;
 
intl gcd(intl a,intl b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
 
int main(){
    intl t,n,sum=0;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        for(intl i=n; i<n+3; i++){
            intl num = i;
 
            while(num>0){
                sum=sum+num%10;
                num=num/10;
            }
 
            if(gcd(i,sum)>1){
                cout<<i<<endl;
                sum=0;
                break;
            }
 
            sum=0;
        }
    }
}