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
 
// https://codeforces.com/contest/1791/problem/C
 
int main()
{
    int t;
    cin>>t;
 
    while(t--){
        int n;
        string s;
 
        cin>>n>>s;
 
        int fri=0, las=n-1;
 
        if(n==0){
            cout<<0<<endl;
            continue;
        }
 
        while(n>0){
            if(s[fri]!=s[las]){
                fri++;
                las--;
                n-=2;
            }else{
                break;
            }
 
        }
 
        cout<<n<<endl;
    }
}