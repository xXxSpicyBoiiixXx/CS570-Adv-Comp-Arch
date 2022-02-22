#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#define MAX 10000 

float main()
{
 
    double matA[MAX][MAX];
    double matB[MAX][MAX];
     
     
    int r1=MAX,c1=MAX,r2=MAX,c2=MAX;
    int i, j, k; 
 
    // Generating random values in matA
    for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                  matA[i][j] = (double)rand() / (double)10.0;
    
           
        // Generating random values in matB
    for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                   matB[i][j] = (double)rand() / (double)10.0;
    
/*    // Displaying matA        
    for (i = 0; i < r1; i++){
        for(j = 0; j < c1; j++)
            printf("%d ",matA[i][j]);
        printf("\n");
    }
             
    // Displaying matB               
    for (i = 0; i < r2; i++){
        for(j = 0; j < c2; j++)
            printf("%d ",matB[i][j]);
        printf("\n");   
    }
     
  */   
    double max = r1*c2;
     
     
    double count = 0;
    double* data = NULL;
    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
               {
            data = (double *)malloc((20)*sizeof(double));
            data[0] = c1;
     
            for (k = 0; k < c1; k++)
                data[k+1] = matA[i][k];
     
            for (k = 0; k < r2; k++)
                data[k+c1+1] = matB[k][j];
              
                }

    return 0;
}
