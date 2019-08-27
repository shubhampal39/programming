#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    
    int coin[3]={3,5,10};
    int n;
    cin>>n;
    int dp[n+1]={0};
    dp[0]=1;
     
    for(int i=0;i<3;i++)
     {
         for(int j=0;j<=n;j++)
        {
            int m=coin[i];
            if(m<=j)
            {
            
                dp[j]=dp[j]+dp[j-m];
            
            }
           
        }
    
     }
     
     cout<<dp[n]<<endl;
    
        
    }
    
	//code
	return 0;
}
