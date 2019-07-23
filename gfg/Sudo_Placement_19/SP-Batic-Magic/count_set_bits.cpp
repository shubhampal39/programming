#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int cnt=0;
	    for(int i=1;i<=n;i++)
	    {
	        int k=i;
	        while(k>0)
	        {
	            if(k&1)
	            {
	                cnt++;
	            }
	            k=k>>1;
	            
	        }
	        
	    }
	    cout<<cnt<<endl;
	    
	    
	    
	}
	
	return 0;
}
