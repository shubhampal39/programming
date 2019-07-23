#include<iostream>
using namespace std;
int catline_no(int n)
{
long long cat[n+1]; 

cat[0]=cat[1]=1;

long long res=0;




for(int i=2;i<=n;i++)
{
  cat[i]=0;
  for(int j=0;j<i;j++)
     {

 cat[i]=cat[i]+(cat[j]*cat[i-j-1]);
 
    }

}
return cat[n];
}


int main()
{

int n;
cin>>n;
cout<<catline_no(n);
return 0;

}
