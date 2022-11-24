// Search an element in Array.

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
