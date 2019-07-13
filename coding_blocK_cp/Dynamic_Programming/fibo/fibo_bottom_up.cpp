//fibo using bottom up approch

#include<iostream>
using namespace std;
long long dp[1000];

long long  fibo(long long n)
{

dp[0]=0;
dp[1]=1;

for(int current_no=2;current_no<=n;current_no++)
{
dp[current_no]= dp[current_no-1] + dp[current_no-2];
}

 return dp[n];
}


int main()
{

long long  n;
cin>>n;
cout<<fibo(n)<<endl;
return 0; 

}
