#include<stdio.h>

int main(){
    int n,i,j,k=0;
    printf("Enter the array element number: ");
    scanf("%d",&n);
    int array[n],array2[n];
    for(i=0;i<n;i++){
        printf("element no. %d: ",i);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(array[i]==array[j]){
                    printf("yo\n");
                break;
            }
        }
        if(j==n){
            array2[k]=array[i];
            printf("yoyo\n");
            k++;
        }
    }
    printf("The unique array : \n");
    for(i=0;i<k;i++){
        printf("%d ",array2[i]);
    }
    return 0;
}
