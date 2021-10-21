#include <stdio.h>

int find_Error(int* arr ,int size);

int main(){
    int j,arr[20] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,15,16,17,18,19,20};       
    int i = find_Error(arr,20);
    printf("%d",i);
    return 0;
}

int find_Error(int* arr ,int size)
{
    int low = 0,high = size-1,medium;
    while(high > low+1)
    {
        medium = (high + low)/2;
        
        if(arr[medium] == medium)
            low = medium;
        else 
            high = medium;
    }
    return high;
}   