/* The program is a C Program to Calculate Standard Deviation
   Created by : ammar shahin */
#include <stdio.h>  /* include the header file containing function used */
#include <math.h>

int main(){ /* the program starts here */
	int i;
	float sum=0,mean,Variance=0,stan_Dev,x[5]; /* declare variables used */
	for(i=0;i<5;i++){   /* loop through the array elements to scan them */
		printf("enter the value of the %d element: ",i);
		scanf("%f",&x[i]);
		sum +=x[i];
		}
	mean = sum/5;
	printf("the mean value for the 5 element array is: %f\n",mean);

	for(i=0;i<5;i++){   /* loop through the array elements to calculate the variance */
        Variance += pow(x[i]-mean,2);
	}
	stan_Dev = sqrt(Variance/5);
	printf("the Standard Deviation value for the 5 element array is: %.3f\n",stan_Dev);
    return 0;
}
