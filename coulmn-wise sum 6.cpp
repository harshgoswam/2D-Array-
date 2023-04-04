
    #include <stdio.h>
     main ()
    {
 
         int a[10][10], i, j, r, c, sum = 0;
 
	printf("Enter Element = \n");
        scanf("%d %d", &r, &c);
 
 
     	printf("Array a[]=\n");

        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j) 
            {
                printf("a[%d][%d]=",i,j);
                scanf("%d", &a[i][j]);
            }
        }
 
      
        for (j = 0; j < r; ++j) 
        {
            for (i = 0; i < c; ++i)
            {
                sum = sum + a[i][j];
            }
 
            printf("Sum of the %d column is = %d\n", j, sum);
            sum = 0;
 
        }
 
    }
