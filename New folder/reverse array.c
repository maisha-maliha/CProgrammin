#include<stdio.h>

int main(){
    int n,i,j=0;
    printf("Enter the array element number: ");
    scanf("%d",&n);
    int array[n],array2[n];
    for(i=0;i<n;i++){
        printf("element no. %d: ",i);
        scanf("%d",&array[i]);
    }
    for(i=n-1;i>=0;i--){
        array2[j]=array[i];
        j++;
    }
    printf("The array : \n");
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\nThe reverse array : \n");
    for(i=0;i<n;i++){
        printf("%d ",array2[i]);
    }
    return 0;
}
