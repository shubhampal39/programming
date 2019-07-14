//grid problem using recursion

#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000]={0};

int Editdistance(char a[],char b[])
{
int m=strlen(a);
int n=strlen(b);

dp[0][0]=0;

for(int i=1;i<=n;i++){dp[0][i]=1+dp[0][i-1];}

for(int i=1;i<=m;i++){dp[i][0]=1+dp[i-1][0];}

for(int i=1;i<=m;i++)
 {
   for(int j=1;j<=n;j++)
    {
int  q1=dp[i-1][j-1];
int  q2=dp[i][j-1];
int  q3=dp[i-1][j];
dp[i][j]=min(q1,min(q2,q3))+(a[i-1]!=b[j-1]); //both character not same then only 
     
     }
  }

return dp[m][n];
}

int main()
{

char a[10000];
char b[10000];
cin>>a>>b;
cout<<Editdistance(a,b)<<endl;

return 0; 
}
