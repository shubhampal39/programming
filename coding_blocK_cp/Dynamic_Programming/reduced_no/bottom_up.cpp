//reduced to no in minimum step

#include<iostream>
using namespace std;
#define ll long long
const int inf=(int) 1e9;
ll dp[10000];//={0};

long long  reducedbyno(long long n)
{
dp[0]=0;
dp[1]=0;
dp[2]=1;
dp[3]=1;

for(int curr_no=4;curr_no<=n;curr_no++)
{
int q1=inf,q2=inf,q3=inf;
  
if(curr_no%3==0){q1=1+dp[curr_no/3];}

if(curr_no%2==0){q2=1+dp[curr_no/2];}

q3=1+dp[curr_no-1];

dp[curr_no]=min(q1,min(q2,q3));


}
return dp[n];

}


int main()
{
long long  n;
cin>>n;
fill(dp,dp+n+1,-1);//for loop
cout<<reducedbyno(n)<<endl;
return 0; 

}
