//wine problem using recursion

#include<iostream>
using namespace std;

int maxprofit(int arr[],int st,int end,int year)
{
if(st>end)
	{return 0;}


int q1=arr[st]*year+maxprofit(arr,st+1,end,year+1);
int q2=arr[end]*year+maxprofit(arr,st,end-1,year+1);

int ans=max(q1,q2);
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

int year=1;
cout<<maxprofit(arr,0,n-1,year)<<endl;
return 0; 

}
