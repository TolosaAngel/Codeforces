#include <bits/stdc++.h>
 
using namespace std;
 
#define forsn(i,s,n) for(int i = int(s); i<int(n); i++)
#define forn(i,n) forsn(i,0,n)
#define dforsn(i,s,n) for(int i = int(n-1); i>=int(s); i--)
#define dforn(i,n) dforsn(i,0,n)
#define DBG(x) cout<<#x<<" = "<<x<<endl;
#define ioFast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long intl;
typedef vector<int> vi;
typedef vector<intl> vll;
 
// https://codeforces.com/contest/1779/problem/B
 
int main(){
    int t,n;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        if(n%2==0){
            cout<<"YES"<<endl;
 
            forn(i,n){
                if(i%2==0) cout<<1<<" ";
                else cout<<-1<<" ";
            }
 
            cout<<endl;
        }else {
            if(n==3) cout<<"NO"<<endl;
            else{
                int a,b=0;
 
                forn(i,n){
                    if(i%2!=0) b++;
                }
 
                a = 1 - b;
 
                cout<<"YES"<<endl;
 
                forn(i,n){
                    if(i%2==0) cout<<a<<" ";
                    else cout<<b<<" ";
                }
 
                cout<<endl;
            }
        }
    }
}