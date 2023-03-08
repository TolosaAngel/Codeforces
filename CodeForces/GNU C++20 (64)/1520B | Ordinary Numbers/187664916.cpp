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
 
// https://codeforces.com/problemset/problem/1520/B
 
 
vll getPos(intl n, int base = 10){
    vll pos;
 
    if(n==0) pos.push_back(0);
 
    while(n>0){
        pos.push_back(n%base);
        n /= base;
    }
 
    return pos;
}
 
int main(){
    intl t,n;
 
    cin>>t;
 
    while(t--){
        cin>>n;
 
        vll v = getPos(n);
 
        if(n<=9){
            cout<<n<<endl;
        }else{
            vll v2(v.size(),v.back());
 
            stringstream str;
            copy(v2.begin(), v2.end(), ostream_iterator<int>(str, ""));
            intl res = stoi(str.str());
 
            if(n >= res){
                cout<<(v.size()-1)*9+v.back()<<endl;
            }else cout<<(v.size()-1)*9+v.back()-1<<endl;
        }
    }
}