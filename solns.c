/* Enter your solutions in this file */
#include <stdio.h>
int max(int [],int );
int main()
{int n,x[n];
int largest=max(x,n);
printf("\nThe largest numberin this integer array is %d",largest);
}
int max(int x[],int n)
{
	int largest;
printf("enter the size of the array");
scanf("%d",&n);
printf("enter the array elements :\n");
for(int i=0;i<n;i++){
	scanf("%d",&x[i]);}
	largest=x[0];

for(int i=0;i<n;i++){
	if(x[i]>largest)
	{
	largest=x[i];
	}}
	return largest;
}
