#include<stdio.h>

int main(){
    int n,i;
    printf("Enter the array element number: ");
    scanf("%d",&n);
    int array[n],array2[n];
    for(i=0;i<n;i++){
        printf("element no. %d: ",i);
        scanf("%d",&array[i]);
    }
    printf("The real array: \n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\nThe copied array2: \n");
    for(i=0;i<n;i++){
        array2[i]=array[i];
        printf("%d ",array2[i]);
    }

    return 0;
}
