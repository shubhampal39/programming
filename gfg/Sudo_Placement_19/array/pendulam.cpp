#include <bits/stdc++.h>
using namespace std;
void pendulum (long long  a[],long long  n)
{
    sort(a,a+n);
    long long  dp[n];
     long long  j=1,i=1;
     long long m=(n-1)/2;
     dp[m]=a[0];
    for(i;i<=m;i++)
    {
        dp[m+i]=a[j++];
        dp[m-i]=a[j++];
        
    }
    
    if(n%2==0)
    {
        dp[m+i]=a[j];
    }
    
    for (long long i=0;i<n;i++)
    {
      cout<<dp[i]<<" ";    
    }
    
}

int main() {
	//code
	long long n,t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    long long a[n];
	    for(long long  i=0;i<n;i++)
	    {
	        cin>>a[i];
	    } 
	    
	  pendulum(a,n);  
cout<<endl;
	}
	
	return 0;
}
