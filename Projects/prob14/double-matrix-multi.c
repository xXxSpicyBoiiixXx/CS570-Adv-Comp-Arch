#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

#define MAX 100 

double main()
{
 
    double matA[MAX][MAX];
    double matB[MAX][MAX];
    double matR[MAX][MAX];  
     
    int row=MAX,col=MAX;
    int i, j, k; 
 
    // Generating random values in matA
    for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
                  matA[i][j] = (double)rand() / 10000.0;
    
           
        // Generating random values in matB
    for (i = 0; i < row; i++)
            for (j = 0; j < col; j++)
                   matB[i][j] = (double)rand() / 10000.0;
    
    // Displaying matA        
    for (i = 0; i < row; i++){
        for(j = 0; j < col; j++)
            printf("%d ",matA[i][j]);
        printf("\n");
    }
             
    // Displaying matB               
    for (i = 0; i < row; i++){
        for(j = 0; j < col; j++)
            printf("%d ",matB[i][j]);
        printf("\n");   
    }
     
     
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
               {
		matR[i][j] = 0;    			       
            for (k = 0; k < col; k++)
                matR[i][j] += matA[i][k] * matB[k][j];
     	       }

    for(i = 0; i < row; i++) { 
	for(j = 0; j < col; j++) 
		printf("%d", matR[i][j]);
	printf("\n"); 
    }
    return 0;
}
