#include<stdio.h>

main(){
    int l,w,i,j;
    scanf("%d %d",&l,&w);
    printf("*");
    for(i=1; i<=w;i++){
        printf("--");
    }
    printf("*\n");

    for(j=1;j<=l;j++){
        printf("|");
        for(i=1;i<=w;i++){
            printf("  ");
        }
        printf("|");
        if(j==(l/2)){
            printf("L = %d",l);
        }
        printf("\n");

    }

    printf("*");
    for(i=1; i<=w;i++){
        printf("--");
    }
    printf("*\n");
    for(i=1; i<=(w/2)-1;i++){
        printf("  ");
    }
    printf(" W= %d\n", w);

}
