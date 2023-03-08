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
 
// https://codeforces.com/problemset/problem/160/A
 
int main()
{
 int n,c=0,c2=0,c3=0;
 cin>>n;
 
 vi v(n);
 forn(i,n) cin>>v[i];
 
 sort(v.rbegin(),v.rend());
 
    forn(i,n){
        c++;
        c2+=v[i];
 
        if(i==0){
            for(int j=i+1; j<n; j++) c3+=v[j];
        }else{
            c3-=v[i];
        }
 
        if(c2>c3){
            break;
        }
    }
 
    cout<<c;
}