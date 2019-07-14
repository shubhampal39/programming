//grid problem using bottom up aproch
#include<bits/stdc++.h>
using namespace std;

int maxcost(int arr[][100],int n,int m)
{

int dp[100][100]={0};
dp[0][0]=arr[0][0];

for(int i=1;i<m;i++)
{
dp[0][i]=dp[0][i-1]+arr[0][i];
dp[i][0]=dp[i-1][0]+arr[i][0];
}

for(int i=1;i<m;i++)
{
  for(int j=1;j<n;j++)
    {
      dp[i][j]=min(dp[i-1][j],dp[i][j-1])+arr[i][j];
    }
}

return dp[m-1][n-1];
}


int main()
{
int grid[100][100]={
{1,2,3},{4,8,2},{1,5,3}};

cout<<maxcost(grid,3,3)<<endl;
return 0; 
}
