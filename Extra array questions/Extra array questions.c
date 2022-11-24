// #1 Search an element in Array.

#include <stdio.h>
int main(){
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, i, a,m=0;
    printf("Enter data you want to find: "); scanf("%d",&a);
    printf("Array Element are--\n");
    for (i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    int data = a;
    for(i=0;i<n;i++)
    {
        if(arr[i]==data){
            printf("\n\nData found");
            m++;
        }
    }
    if(m==0)
    {
        printf("\n\nData not found");
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
/* 
#1. Algorithm for search element in array 
Arr[] - array varible 
N - total number of element
data - varible for search element

step 1 Initialize counter(m) = 0, varible i = 0
step 2 while(I<0) Repeat
step 3 if(arr[i] == data) then print data found next counter++(m++)  
step 4 end if
step 5 set i = i + 1
step 6 end while // Repeat until condition become false 
step 7 if m==0 then print data not found 
step 8 end if
*/
----------------------------------------------------------------------------------------------------------------------------------------- 
