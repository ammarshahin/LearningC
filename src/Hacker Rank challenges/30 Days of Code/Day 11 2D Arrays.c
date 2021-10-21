#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num = 0,i = 0,j = 0,k = 0,index = 0;
    char arr[100] = {0},y[100] = {0};
    scanf("%d",&num);
    while(num)
    {
        arr[index++] = num%2;
        num /= 2;
    }
    for(i = index-1; i >= 0 ; i--){
      printf("%d",arr[i]);
    }

    printf("\n\n");

      i = index-1;
      while(i >= 0){ 
        j++;
        while(arr[i])
        {
          y[j]++;
          i--;
          if(i < 0)
            break;
        }
        i--;
      }
          k = y[0]; 
       for(i = 0 ; i <= j ; i++)
         {
           if(y[i] > k)
             k = y[i];
         }
    printf("%d",k);
}