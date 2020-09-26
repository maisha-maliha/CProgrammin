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
            if( (i==j && array[i][j]==1) || (i!=j && array[i][j]==0)){
                sum++;
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    if(sum==n*m){
        printf("This is an Identity Matrix\n");
    } else{
        printf("This is not an Identity Matrix\n");
    }
    printf("The sum of the diagonal elements of the 2D array is %d\n",sum);
    return 0;
}
