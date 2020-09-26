#include<stdio.h>

int main(){
    int i,n,p,box;
    printf("Enter array element number: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    printf("added element position: ");
    scanf("%d",&p);
    printf("Enter value: ");
    scanf("%d",&box);
    array[n+1];
    for(i=n;i>=p;i--){
        array[i]=array[i-1];
    }
    array[p-1]= box;
    printf("New Array element: ");
    for(i=0;i<=n;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
