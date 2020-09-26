#include<stdio.h>
main(){
    // Prime number
    int i,j,n;
    scanf("%d",&n);
    for(i=3;i<n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(i==j){
            printf("%d - Prime\n",i);
        }
    }

    printf("\n\n\n");
    //Not prime number
    for(i=3;i<n;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                printf("%d not prime\n",i);
                break;
            }
        }
    }
}
