/* The program is a C Program to Add Two Matrix Using Multi-dimensional Arrays
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */

	int r, c, a[100][100], b[100][100], sum[100][100],i,j; /* declare variables used */
/* get the dimensions of the two arrays */
    printf("Enter number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter number of columns (between 1 and 100): ");
    scanf("%d", &c);

/* get elements of 1st matrix */
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            printf("Enter element a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

/* get elements of 2nd matrix */
    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r; ++i){
        for(j=0; j<c; ++j){
            printf("Enter element a[%d][%d]: ",i,j);
            scanf("%d", &b[i][j]);
        }
    }

/* Adding the Two matrices */
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
            sum[i][j]=a[i][j]+b[i][j];

/* Displaying the result */
    printf("\nSum of two matrix is: \n\n");
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            printf("%d   ",sum[i][j]);
            if(j==c-1)
                printf("\n\n");
        }
    }
    return 0;
}
