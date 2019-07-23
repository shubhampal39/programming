#include<iostream>
using namespace std;
int powerof(int n,int p)
{
   if(p==0)
   {return 1;}

   int ans=powerof(n,p/2);
   
   if(p%2==0)
   {
	   return ans*ans;
   }
   else
   {
	   if(p>0)
	   {
		   return n*ans*ans;
	   }
	   else
	   {
		   return (ans*ans)/n;
	   }

   }




}

int main() {

	int n,p;
	cin>>n>>p;
	cout<<powerof(n,p);
	return 0;

}
