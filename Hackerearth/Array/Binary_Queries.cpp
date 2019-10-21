#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,q1;
    scanf("%d%d",&n,&q);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    while(q--)
    {

        scanf("%d",&q1);
        if(q1==0)
        {  int aa,b;
            scanf("%d%d",&aa,&b);
            
            if(a[b-1]==1)
            {cout<<"ODD\n";}
            else{cout<<"EVEN\n";}
        }
        if(q1==1)
        {
         int no;
         scanf("%d",&no);
        if(a[no-1]==0)
        {a[no-1]=1;}
        else
        {a[no-1]=0;}
        
               
        }
        
        
    }
    
    
    
}
