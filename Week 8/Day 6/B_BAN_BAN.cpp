#include <bits/stdc++.h>
 
#include <algorithm> 
#define ll long long
using namespace std;
 
int main()
{
    int t;cin>>t;while (t--)
    {
        int n;cin>>n;
        string s="#";
        for(int i = 0 ; i <n;i++){
            s=s+"BAN";
        }
        vector<pair<int,int>>p;
        int l=2,r=s.size()-1;

        while(l<r){
            
            p.push_back({l,r});
            swap(s[l],s[r]);
            l+=3;
            r-=3;
        }
        cout<<p.size()<<endl;
        for(auto i :p){
            cout<<i.first<<" "<<i.second<<endl;
        }
        
       
    }
    return 0;
    
}