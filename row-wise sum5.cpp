
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
 
        for (i = 0; i < r; ++i) 
        {
            for (j = 0; j < c; ++j) 
            {
                sum = sum + a[i][j] ;
            }
 
            printf("Sum of the %d row is = %d\n", i, sum);
            sum = 0;
 
        }
      
 
    }
