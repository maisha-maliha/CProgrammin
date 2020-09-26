#include<stdio.h>

main(){
    int a,b,c,n;
    scanf("%d",&n);
    for(a=n;a>=1;a--){
        for(c=0;c<n-a;c++){
            printf(" ");
        }
        for(b=a;b>=1;b--){
            printf("*");
        }
        printf("\n");
    }

    for(a=1; a<=n; a++){
        printf("--");
    }
    printf("\n");
    for(a=1; a<=n; a++){
        printf("--");
    }
    printf("\n");

    for(a=1;a<=n;a++){
        for(c=1;c<=n-a;c++){
            printf(" ");
        }
        for(b=1;b<=a;b++){
            printf("*");
        }
        printf("\n");
    }




}
