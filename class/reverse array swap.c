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
    printf("\nEnter array2 Elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&array2[i]);
    }
    // another methode
    //int j=0;
    //for(i=n-1;i>=0;i--){
    //    box=array[i];
    //    array[i]=array2[j];
    //    array2[j]=box;
    //    j++;
    //}
    for(i=0;i<n;i++){
        box=array[i];
        array[i]=array2[n-i-1];
        array2[n-i-1]=box;
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

