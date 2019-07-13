//wine problem using recursion

#include<iostream>
#include<cstring>
using namespace std;
int memo[100][100];

int maxprofit(int arr[],int st,int end,int year)
{
if(st>end)
	{return 0;}

if(memo[st][end]!=-1){return memo[st][end];}

int q1=arr[st]*year+maxprofit(arr,st+1,end,year+1);
int q2=arr[end]*year+maxprofit(arr,st,end-1,year+1);


int ans=max(q1,q2);

memo[st][end]=ans;

return ans;

}


int main()
{
int  n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
memset(memo,-1,sizeof(memo));
int year=1;
cout<<maxprofit(arr,0,n-1,year)<<endl;
return 0; 

}
