#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;
  
	printf("Enter Element = \n");
 	scanf("%d %d", &i, &j);
 	
      	printf("Array a[]=\n");

 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{   
          	printf("a[%d][%d]=",rows,columns);
      		scanf("%d", &a[rows][columns]);
    	}
  	}
   	  
 	for(rows = 0; rows < i; rows++)
  	{
  		Sum = Sum + a[rows][i - rows  - 1];
  	}
 
 	printf("\n  Sum of Diagonal  =  %d", Sum );

 	return 0;
}
