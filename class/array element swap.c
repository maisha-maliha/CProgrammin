#include<stdio.h>
int main(){
    int i,n,box;
    printf("Enter array element number: ");
    scanf("%d",&n);
    int array[n],array2[n];
    printf("\nEnter array Elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        array2[i]=array[i];
    }
    printf("\nArray one elements: ");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\nArray two elements: ");
    for(i=0;i<n;i++){
        printf("%d ",array2[i]);
    }
    return 0;
}


