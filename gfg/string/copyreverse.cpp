#include <bits/stdc++.h> 
using namespace std; 
 
void myCopy(char s1[], char s2[], int index = 0) 
{ 
  s2[index] = s1[index];  
  
    if (s1[index] == '\0')   
        return; 
  
    myCopy(s1, s2, index + 1);  
} 
  
 
int main() 
{ 
    char s1[100] = "shubham"; 
    char s2[100] = ""; 
    myCopy(s1, s2); 
    cout << s2; 
    return 0; 
} 
