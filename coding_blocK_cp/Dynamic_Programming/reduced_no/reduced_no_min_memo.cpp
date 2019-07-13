//fibo using memorization

#include<iostream>
using namespace std;
#define ll long long
const int inf=(int) 1e9;
ll memo[10000];//={0};
long long  reducedbyno(long long n)
{

if(n==1||n==0)
{
return n;
}

if(memo[n]!=-1){return memo[n];}

int q1=inf,q2=inf,q3=inf;

if(n%3==0)
{ q1=1+reducedbyno(n/3);}

if(n%2==0) {
  q2=1+reducedbyno(n/3);
}

q3=1+reducedbyno(n-1);


memo[n]=min(q1,min(q2,q3));

return memo[n];

}


int main()
{
long long  n;
cin>>n;
fill(memo,memo+n+1,-1);//for loop
cout<<reducedbyno(n)<<endl;
return 0; 

}
