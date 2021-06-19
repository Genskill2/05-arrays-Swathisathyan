#include <stdio.h>
int max(int x[],int n)
{
int max=0;
for (int i=0;i<n;i++)
 { 
if (x[i]>max)
max=x[i];
 }
	return (max);
}

int min(int x[],int n)
{
int min=x[0];
 for(int i=0;i<n;i++)
   {
	if(x[i]<min)
	min=x[i];
   }
	return (min);
}
float average(int x[],int n)
{
int sum=0;
float avg=0;
   for(int i=0;i<n;i++)
   {
	sum+=x[i];
   }
avg=sum/n;
return avg;
}
int mode(int x[],int n)
{
	int lmax=max(x,n);
	int lmin=min(x,n);
	int counts[100],b=-1;
	for(int i =lmin;i<=lmax;i++)
		{
		int cnt=0;
		for(int j=0;j<n;j++)
		{
			if(x[j]==i)
				cnt++;
		}
		counts[++b]=cnt;
		}
	int cmax=0,flag=0;
	for (int i=0;i<=b;i++)
	{
		if (counts[i]>cmax)
		{	cmax=counts[i];
			flag=i-(0-lmin);
		}
			}
	return (flag);
}
    int isprime(int i)
 {
	int flag=0;
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			    return 1;
			else
			    return 0;
    }
int factors(int n,int a[])
{
	int count=0;
    	int i=2;
    	while(i<n)
    	{
        	if(n%i==0)
			if(isprime(i)==1)
			{	a[count]=i;
				count++;
                		n=n/i;
                		if(isprime(n)==1)
                		{
                			a[count++]=n;
                			break;
                		}
                		i=2;
			}
		else continue;
		else
		i++;
	}
	return count;
}
