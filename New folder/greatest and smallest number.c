#include<stdio.h>

int main(){
    int n,i,min,max;
    printf("Enter the array element number: ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("element no. %d: ",i);
        scanf("%d",&array[i]);
    }
    max=array[0];
    min=array[0];
    for(i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min=array[i];
        }
    }
    printf("The greatest number is %d and the smallest number is %d",max,min);

    return 0;
}
