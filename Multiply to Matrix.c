/* The program is a C Program to Multiply to Matrix Using Multi-dimensional Arrays
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */

int main(){ /* the program starts here */

    int a[10][10], b[10][10], result[10][10], r1, c1, r2, c2, i, j, k;  /* declare variables used */

/* get the dimensions of the two arrays */
    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);

/* Column of first matrix should be equal to column of second matrix */
    while(c1 != r2){
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);

        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }


/* get elements of 1st matrix */
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0; i<r1; ++i){
        for(j=0; j<c1; ++j){
            printf("Enter element a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
	}

/* get elements of 2nd matrix */
    printf("Enter elements of 2nd matrix:\n");
    for(i=0; i<r2; ++i){
        for(j=0; j<c2; ++j){
            printf("Enter element b[%d][%d]: ",i, j);
            scanf("%d", &b[i][j]);
        }
	}

/* Initializing all elements of result matrix to 0 */
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            result[i][j] = 0;

/*Multiplying matrices a and b and storing result in result matrix */
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
                result[i][j]+=a[i][k]*b[k][j];

/* Displaying the result */
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j){
            printf("%d  ", result[i][j]);
            if(j == c2-1)
                printf("\n\n");
        }
    return 0;
}
