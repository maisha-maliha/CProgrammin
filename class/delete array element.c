#include<stdio.h>

int main(){
    int i,n,p;
    printf("Enter array element number: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("deleted element position: ");
    scanf("%d",&p);
    for(i=p;i<n;i++){
        array[i-1]=array[i];
    }
    printf("New Array element: ");
    for(i=0;i<n-1;i++){
        printf("%d ",array[i]);
    }
    return 0;
}

