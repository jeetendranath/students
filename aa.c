#include<stdio.h>
int main()
{
	int a[20];
	int pass,hold,i,n=10;
	char t;
	int b[10]={'a','b','c','d','e','f','g','h','i','j'};
	printf("Enter the Number of Gifts Purchased By The 10 Students \n");
	for(i=0;i<n;i++)
	{
		printf("\n %c",b[i]);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		&b[i]=a[i];
		printf("%d ",b[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	for(pass=1;pass<=n-1;pass++)
	{
		for(i=0;i<n-1;i++)
		{
			if(a[i]<a[i+1])
			{
				hold=a[i];
				a[i]=a[i+1];
				a[i+1]=hold;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		
		printf("%d \n",a[i]);
	}
	
		
	

}
