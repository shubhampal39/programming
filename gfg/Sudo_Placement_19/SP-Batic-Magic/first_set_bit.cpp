#include <iostream>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int cnt=0;
	   while(n>0)
	   {
	       if(n&1)
	       {
	           cnt++;
	           break;
	       }
	       else{
	       cnt++;}
	       n=n>>1;
	   }
	    
	    if(cnt)
	    {
	               cout<<cnt<<endl;
	    }else
	    {       cout<<0<<endl;
	    }
	    	}

	
	return 0;
}
