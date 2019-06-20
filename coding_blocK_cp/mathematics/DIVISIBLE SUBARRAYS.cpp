#include<iostream>
#include<cstring>
using namespace std;
#define ll long long 
ll a[1000005],prefixsum[1000005];

int main()
{
int t;
cin>>t;
while(t--)
{




   int n;
   cin>>n;
 ll sum=0;
  memset(prefixsum,0,sizeof prefixsum);
  prefixsum[0]=1; // storing frequency 

for(int i=0;i<n;i++)
{
	cin>>a[i];
  
        sum +=a[i];
	sum %=n;
	sum=(sum+n)%n;//for negative number
	prefixsum[sum]++;
	
}

 ll ans=0;
for(int i=0;i<n;i++)
{
ll no=prefixsum[i];
ans+=((no)*(no-1))/2;//finding nc2 here
}

cout<<ans<<endl;
}
return 0;
}
