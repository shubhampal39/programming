
#include<bits/stdc++.h>
using namespace std;

int dp[1000]={0};
int cuttingrod(int arr[],int totallen)
{

for(int len=1;len<=totallen;len++)
{ 
  int best=0;
   for(int cut=1;cut<=len;cut++)
   { 
     best=max(best,arr[cut]+dp[len-cut]); 
   }
   dp[len] =best;
}

return dp[totallen];
}

int main()
{
int a[10000];
int totallen;
cin>>totallen;
//int a[n];

for(int i=1;i<=totallen;i++)
{cin>>a[i];}

cout<<cuttingrod(a,totallen)<<endl;

return 0; 
}
