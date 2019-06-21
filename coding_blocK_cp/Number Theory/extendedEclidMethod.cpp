#include<iostream>
using namespace std;

int x,y,GCD;

void extendedEclidMethod(int a,int b)
{
  if(b==0)
{

x=1;
y=0;
sGCD=a;
return;
}

extendedEclidMethod(b,a%b);

int cX=y;
int cY=x-(a/b)*y;
x=cX;
y=cY;


}


int main()
{
extendedEclidMethod(18,30);
cout<<x<<" "<< y<<endl;
return 0;


}
