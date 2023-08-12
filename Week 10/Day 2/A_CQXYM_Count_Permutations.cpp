#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n+=n;
 
        ll fact=1;
        for(int i=3; i<=n; i++)
        {
            fact*=i;
            fact%= 1000000007;
        }
        cout<<fact<<endl;
    }
    return 0;
}