//longest incresing subsequence using dp;

#include<bits/stdc++.h>
using namespace std;
int dp[100]={1};

int LIS(int a[],int n)
{

int maxsub=0;




for(int i=1;i<n;i++)
{ 
   for(int j=0;j<i;j++)
   {
      if(a[j]<=a[i])
         {
        
        dp[i]=max(dp[i],dp[j]+1) ;
    
         }
   }
   maxsub=max(maxsub,dp[i]);
  
}



return maxsub;
}

int main()
{

int a[100];
int n;
cin>>n;
for(int i=0;i<n;i++)
{cin>>a[i];}


cout<<LIS(a,n)<<endl;

return 0; 
}
