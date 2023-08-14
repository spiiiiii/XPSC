#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n+3];
        for(int i = 1 ;i<=n;i++){
            cin>>a[i];
        }
        ll int ans=a[1]-1;
        ll int ind=ans;
        for(int i=2;i<=n;i++)
        {
            if(ind+i<a[i])
            {
                ll int x =a[i]-(ind+i);
                ind+=x;
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
}