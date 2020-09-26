#include<stdio.h>
int main(){
    int i,j,t,n,product;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        if(i==n){
            for(j=1;j<=i;j++){
                printf("%d ",j*j);
            }
            printf("\n");
        }
        if(i!=n){
                if(i%2==0){
                    //printf("1 ");
                    for(j=1;j<=i;j++){
                        printf("%d ",j*j);
                    }
                    printf("\n");
                }
        }
        if(i==1){
            printf("1");
        }

    }
    return 0;
}
