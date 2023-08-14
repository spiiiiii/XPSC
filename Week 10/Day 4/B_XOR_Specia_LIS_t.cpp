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
        int a[n];
        int ans=0;
        for(int i = 0 ;i < n;i++) cin>>a[i];
        if(n%2==0)cout<<"YES"<<endl;
        else{
            for(int i = 1;i<n;i++){
                if(a[i]<=a[i-1]){
                    ans = 1;
                    break;
                }

            }
            if(ans==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}