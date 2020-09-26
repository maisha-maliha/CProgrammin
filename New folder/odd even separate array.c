#include<stdio.h>

int main(){
    int n,i,j=0,k=0;
    printf("Enter the array element number: ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("element no. %d: ",i);
        scanf("%d",&array[i]);
    }
    int even[n],odd[n];
    for(i=0;i<n;i++){
        if(array[i]%2==0){
            even[j]=array[i];
            j++;
        }
        if(array[i]%2!=0){
            odd[k]=array[i];
            k++;
        }
    }
    printf("The even array: \n");
    for(i=0;i<j;i++){
        printf("%d ",even[i]);
    }
    printf("\nThe odd array: \n");
    for(i=0;i<k;i++){
        printf("%d ",odd[i]);
    }

    return 0;
}
