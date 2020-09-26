#include<stdio.h>

int main(){
    int max,max2,i,n;
    printf("Enter array element number: ");
    scanf("%d",&n);
    int array[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    max=array[0];
    max2=array[0];
    for(i=0;i<n;i++){
        if(max<array[i]){
            max2=max;
            max=array[i];
        }
        if(max>array[i] && max2<array[i]){
            max2=array[i];
        }
    }
    printf("%d- max and %d- second highest\n",max,max2);


    return 0;
}
