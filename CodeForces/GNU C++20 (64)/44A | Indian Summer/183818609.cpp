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
 
// https://codeforces.com/problemset/problem/44/A
 
int main(){
    int n;
    set<map<string,string>> S;
 
    cin>>n;
 
    while(n--){
        string str1, str2;
        map<string,string> M;
 
        cin>>str1>>str2;
 
        M[str1] = str2;
 
        S.insert(M);
    }
 
    cout<<S.size();
}