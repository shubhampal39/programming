// A divide and conquer based 
// efficient solution to find 
// median of two sorted arrays 
// of same size. 
#include<bits/stdc++.h> 
#define ll long long
using namespace std; 

/* to get median of a 
sorted array */
int median(int [], int); 

/* This function returns median 
of ar1[] and ar2[]. 
Assumptions in this function: 
	Both ar1[] and ar2[] are 
	sorted arrays 
	Both have n elements */
int getMedian(int ar1[], 
			int ar2[], int n) 
{ 
	/* return -1 for 
	invalid input */
	if (n <= 0) 
		return -1; 
	if (n == 1) 
		return (ar1[0] + 
				ar2[0]) / 2; 
	if (n == 2) 
		return (max(ar1[0], ar2[0]) + 
				min(ar1[1], ar2[1])) / 2; 

	/* get the median of 
	the first array */
	int m1 = median(ar1, n); 
	
	/* get the median of 
	the second array */
	int m2 = median(ar2, n); 

	/* If medians are equal then 
	return either m1 or m2 */
	if (m1 == m2) 
		return m1; 

	/* if m1 < m2 then median must 
	exist in ar1[m1....] and 
				ar2[....m2] */
	if (m1 < m2) 
	{ 
		if (n % 2 == 0) 
			return getMedian(ar1 + n / 2 - 1, 
							ar2, n - n / 2 + 1); 
		return getMedian(ar1 + n / 2, 
						ar2, n - n / 2); 
	} 

	/* if m1 > m2 then median must 
	exist in ar1[....m1] and 
				ar2[m2...] */
	if (n % 2 == 0) 
		return getMedian(ar2 + n / 2 - 1, 
						ar1, n - n / 2 + 1); 
	return getMedian(ar2 + n / 2, 
					ar1, n - n / 2); 
} 

/* Function to get median 
of a sorted array */
int median(int arr[], int n) 
{ 
	if (n % 2 == 0) 
		return (arr[n / 2] + 
				arr[n / 2 - 1]) / 2; 
	else
		return arr[n / 2]; 
} 




int main()
{
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
{
  cin>>a[i];

}


for(int i=0;i<n;i++)
{
  cin>>b[i];

}


cout<<getMedian(a,b,n);

return 0;


}
