Problem Statement : https://codeforces.com/contest/1154/problem/D

#include<bits/stdc++.h>
 
#define ll long long
 
using namespace std;
 
ll a,b,lol;
 
void battery(int s)
{
    if(s == 1)  a = min(a+1, lol);
    b--;
}
 
void acc()
{
    a--;
}
 
int main()
{
    ll n, ans = 0;
    cin>>n>>b>>a;
    lol = a;
    vector<int> s(n);
 
    for(int i=0;i<n;++i){
        cin>>s[i];
    }
 
    for(int i=0;i<n;++i){
        if(a == 0 && b == 0)    break;
 
        else if(a == 0) battery(s[i]);
 
        else if(b == 0) acc();
 
        else if(s[i] == 1 && a < lol)   battery(s[i]);
 
        else acc();
 
        ans++;
    }
 
    cout<<ans<<endl;
    return 0;
}
