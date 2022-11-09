-----------------------------------------------------------------------------------------------------------------------------------------
/*
three ways to insertion in array:- 1) Insert in beginning 
                                   2) insert at the end of array
                                   3) insert new element at given position.
1) Insert in beginning
*/
-----------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
int main(){
    int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, i, data;
    printf("\n array element--\n\n");
    for (i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    for (i = n; i >= 0; i--){
        arr[i + 1] = arr[i];
    }
    arr[0] = data;
    n++;

    printf("\nafter insertion array element are-- \n\n");
    for (i = 0; i < n; i++){
        printf("%d\t", arr[i]);
    }
}
-----------------------------------------------------------------------------------------------------------------------------------------
/* 
#1. Algorithm for array traversal 
Arr[] - array varible 
N - total number of element
data - varible for inserting new num

step 1 Initialize var I=n
step 2 while(I<0) Repeat
step 3 set arr[i] = arr[i-1]
step 4 set i=i-1
step 5 end while // repeat step 2 to 5 until condition become false
step 6 set arr[0] = data 
step 5 set n=n+1
step 6 Return
*/
-----------------------------------------------------------------------------------------------------------------------------------------
