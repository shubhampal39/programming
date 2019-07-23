#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=13;i>=0;i--)
        {
            int k=n>>i;
            if(k&1)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
            
        }

        
        cout<<endl;
        
    }
    
	return 0;
}
