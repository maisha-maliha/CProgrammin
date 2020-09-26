#include<stdio.h>
#include<string.h>

int main(){
    int A[100],l,t,i,j,k,x,number=0;
    scanf("%d",&t);
    for(l=0;l<t;l++){
        scanf("%d",&A[l]);
    }
    for(i=0;i<t;i++){
        for(j=0;j<100;j++){
            for(k=0;k<t;k++){
                if(A[k]==j){
                    number++;
                    printf("k position is %d\n value j: %d\n array i position: %d number: %d\n",k,j,i,number);
                }
            }
        }
    }
    if(number<=3){
        printf("YES\n");
        printf("total :%d",number);
    } else{
        printf("NO\n");printf("total: %d",number);
    }

    return 0;
}
