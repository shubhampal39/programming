  
#include <bits/stdc++.h> 
using namespace std; 

template<class T>

void printarray(T a[],int b)
{

for(int i=0;i<b;i++)
{cout<<a[i]<<" ";}

}

int main() 
{ 

//int arr[]={1,2,3,4,5,6,7,7};
char arr[]="abcd";
int n=sizeof(arr)/sizeof(arr[0]);

printarray(arr,n);

return 0; 
} 
