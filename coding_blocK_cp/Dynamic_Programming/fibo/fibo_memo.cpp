//fibo using memorization

#include<iostream>
using namespace std;
long long dp[1000];

long long  fibo(long long n)
{
if(n==1||n==0)
{
return n;
}

if(dp[n]){return dp[n];}

dp[n]=fibo(n-1)+fibo(n-2);

return dp[n];
}


int main()
{

long long  n;
cin>>n;
cout<<fibo(n)<<endl;
return 0; 

}
