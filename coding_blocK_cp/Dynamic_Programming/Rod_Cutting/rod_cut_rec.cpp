//rod cutting problem using recursion

#include<bits/stdc++.h>
using namespace std;


int cuttingrod(int arr[],int totallen)
{

if(totallen ==0)return 0;

int best=0;

for(int len=1;len<=totallen;len++)
{ 
int netprofit = arr[len]+cuttingrod(arr,totallen-len);
best=max(best,netprofit);

}
 return best;

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
