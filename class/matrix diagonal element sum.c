#include<stdio.h>
int main(){
    int i,n,m,j,sum=0;
    printf("Enter 2D array element number: ");
    scanf("%d %d",&n,&m);
    int array[n][m];
    printf("Enter array Elements: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&array[i][j]);
            if(i==j){
                sum+=array[i][j];
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the diagonal elements of the 2D array is %d\n",sum);
    return 0;
}
