#include <stdio.h>
int max(int [],int);
int min(int [],int);
int main()
    {
int x[100];
int n,largest,smallest;
for(int i=0;i<n;i++){
scanf("%i",&x[i]);}
largest=max(x,n);
smallest=min(x,n);
printf("\nMAXIMUM NUMBER IS %i\n SMALLEST NUMBERE :%i\n",largest,smallest);
    
    }
    int max(int x[],int n)
    {
    	int i,maxim;
    	maxim=x[0];
    	for(i=1;i<n;i++)
            {
    		if(x[i]>maxim)
    			maxim=x[i];
    	}
    	return(maxim);
    }
int min(int x[],int n)
{int i,minim;
minim=x[0];
for(i=0;i<n;i++)
{if (x[i]<minim)
minim=x[i];
}
return(minim);
}

