#include <bits/stdc++.h>
 
#include <algorithm> 
#define ll long long
using namespace std;
 
int main()
{
    int t;cin>>t;while (t--)
    {
        string s;
        cin>>s;
        map<char,int>m;
        for(int i = 0 ; i < s.size();i++){
            m[s[i]]+=2;
        }
        string L="",R="";
        for(char c='a';c<='z';c++){
            if(m[c]==0)continue;
            for(int i=1;i<=m[c]/2;i++){
                L.push_back(c);
            }
            for(int i=1;i<=m[c]/2;i++){
                R.push_back(c);
            }
        }
        reverse(R.begin(),R.end());
        cout<<L<<R<<endl;
       
    }
    
}