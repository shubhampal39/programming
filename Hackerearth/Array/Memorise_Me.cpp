#include<bits/stdc++.h>
#define ll long long
using namespace std;
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);
int main()
{
    //std::ios::sync_with_stdio(false);
    //cin.tie(NULL);
    ll n,j;
    //cin>>n;
    scanf("%lld",&n);
    ll a[1000001]={0};
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&j);
        a[j]++;
    }
    ll t;
    
    scanf("%lld",&t);
    while(t--)
    {
        ll no;
     scanf("%lld",&no);
     
     a[no]!=0?printf("%lld\n",a[no]):printf("NOT PRESENT\n");
     
    }
     
    
}
