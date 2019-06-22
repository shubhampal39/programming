#include<iostream>
using namespace std;

int x,y;
void extendedeuclidenmethod(int a,int b)
{

if(b==0)
{
x=1;
y=0;
return;}

extendedeuclidenmethod(b,a%a);
int cx=y;
int cy=x-(a/b)*y;
x=cy;
y=cy;
}

int inversemodule(int a,int m)
{
extendedeuclidenmethod(a,m);
return ((x+m)%m);
}



int main()
{
cout<<inversemodule(6,7)<<endl;
//ans=1
return 0;
}
