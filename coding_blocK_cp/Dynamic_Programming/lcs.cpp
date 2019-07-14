//longest common subsequence using dp;

#include<bits/stdc++.h>
using namespace std;
int dp[100][100]={0};

int LCS(char a[],char b[])
{
int m=strlen(a);

int n=strlen(b);


for(int i=1;i<=m;i++)
{ 
   for(int j=1;j<=n;j++)
   {
      if(a[i-1]==b[j-1])
         {
         dp[i][j]=dp[i-1][j-1]+1;      
         }
      else
     {
           dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      }
   }

}



return dp[m][n];
}

int main()
{

char a[100];
char b[100];
cin>>a>>b;
cout<<LCS(a,b)<<endl;

return 0; 
}
