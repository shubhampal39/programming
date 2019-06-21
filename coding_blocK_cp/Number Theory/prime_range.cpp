#include<bits/stdc++.h>

using namespace std;

void  primsieve(int *p,int n)
{

p[0]=0;
p[1]=0;
p[2]=1;
//mark all odds as prime

for(int i=3;i<=n;i+=2)
{p[i]=1;}
//sieve login to mark non prime numbners as 0

for(int i=3;i<=n;i+=2)
{
if(p[i]){
//mark all the multiples of all number as not prime
//2.optimisation take a jump of 2i starting fom i*i
	for(int j=i*i;j<=n;j+=2*i)
            {
           p[j]=0;       
          }
        }
}

return;
}

int main()
{
int N=1000;
int p[N]={0};
//int n;
//cin>>n;
primsieve(p,100);

for(int i=0;i<=100;i++)
{
  if(p[i])
   {cout<<i<<" ";}

}
return 0;
}
