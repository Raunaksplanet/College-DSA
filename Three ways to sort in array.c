-----------------------------------------------------------------------------------------------------------------------------------------
/*
There is three ways to sort in array:- 1) Bubble sort
                                       2) Insert sort
                                       3) selection sort
*/
-----------------------------------------------------------------------------------------------------------------------------------------
// 1) Bubble sort 
  
#include <stdio.h>
int main(){
    int arr[10],n;
    for(int i=0;i<10;i++)
    {
        printf("Enter array element at %d index: ",i); scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i]>arr[j]){
                n = arr[i];
                arr[i] = arr[j];
                arr[j] = n;
            }
        }
    }
     for(int i=0;i<10;i++)
     {
        printf("%d\t",arr[i]);
     }   
}  
-----------------------------------------------------------------------------------------------------------------------------------------
// 2) Insert sort
  
.  