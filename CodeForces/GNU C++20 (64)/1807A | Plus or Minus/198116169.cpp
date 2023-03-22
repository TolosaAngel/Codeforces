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
 
// https://codeforces.com/contest/1807/problem/0?e4f5ae4b42fbfda61290dfc0030ba520ac0d241bd87d06661d3e949667618ce2=1
 
int main(){
    int t,a,b,c;
    cin>>t;
 
    while(t--){
        cin>>a>>b>>c;
 
        if(a+b==c) cout<<"+"<<endl;
        else cout<<"-"<<endl;
    }
}