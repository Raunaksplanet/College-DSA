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