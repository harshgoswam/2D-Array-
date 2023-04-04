#include<stdio.h>
main()
{
	int a[50],sum,i,n;
	float avg;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
    }
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	  avg = (float)sum / i;
   printf("Average of array values is %.2f", avg);  
  
}
	


