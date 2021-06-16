/* Enter your solutions in this file */
#include <stdio.h>
int max(int [],int );
int main()
{int n,a[n];
int largest=max(a,n);
printf("\nThe largest numberin this integer array is %d",largest);
}
int max(int a[],int n)
{
	int largest;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the array elements :\n");
for(int i=0;i<n;i++){
	scanf("%d",&a[i]);}
	largest=a[0];

for(int i=0;i<n;i++){
	if(a[i]>largest)
	{
	largest=a[i];
	}}
	return largest;
}
