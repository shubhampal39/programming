//reduced no in miminum step;

#include<iostream>
using namespace std;
 
const int inf=(int) 1e9;

long long  reducedbyno(long long n)
{

if(n==1||n==0)
{
return n;
}

long long q1=inf,q2=inf,q3=inf;

if(n%3==0)
{q1=1+reducedbyno(n/3);}

if(n%2==0) {
q2=1+reducedbyno(n/3);
}

q3=1+reducedbyno(n-1);

return min(q1,min(q2,q3));

}


int main()
{

long long  n;
cin>>n;
cout<<reducedbyno(n)<<endl;
return 0; 

}
