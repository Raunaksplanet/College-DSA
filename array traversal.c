//#1. Array traversal(means to access each element (item) stored in the array so that the data can be checked or used as part of a process.)

#include <stdio.h>
int main(){
    int arr[10],n=10,i;
    printf("Enter array element:- \n"); 
    for(i=0;i<n;i++){
        printf("Array value at index no %d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Array element are: ");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

// #1. Algorithm for array traversal 
// Arr[] - array varible 
// N - total number of element 
// step 1 Initialize var I=0
// step 2 while(I<N) Repeat
// step 3 print (Arr[I])
// step 4 set I = I + 1
// step 5 end while // repeat step 2 to 5 until condition become false.
// step 6 Return
