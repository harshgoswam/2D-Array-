#include <stdio.h>

int main() 

{
   int arr[100][100],N;
   
   printf("Enter the value of N: ");
   scanf("%d%d", &N,&N);

   
   for (int i = 0; i < N; i++)
    {
       for (int j = 0; j < N; j++)
	    {
	   	printf("a[%d][%d]=",i,j);
         scanf("%d", &arr[i][j]);
        }
   }
   
   printf(" elements of the  =\n");
   for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
		 {
         printf("%d ", arr[i][j]);
         }
      printf("\n");
   }

}

