#include<stdio.h>
main(){
    int a,b;
    scanf("%d",&a);
    if(a%2==0){
        printf("even number\n\n");
    } else{
        printf("odd number\n\n");
    }

    // check if some thing is divisible by 5
    printf("\n\ncheck if some thing is divisible by 5\n\n");
    scanf("%d",&b);;
    if(b%5==0)
        printf("yes!! it is divisible by 5\n\n");
    else
        printf("not it is not divisible by 5\n\n");

    // compares two numbers
    printf("\n\ncompares two numbers\n\n");
    if(a>b)
        printf("a is greater than b\n\n");
    else
        printf("b is greater than a\n\n");

    // 3 no. in ascending and descending
    printf("\n\n3 no. in ascending and descending\n\n");
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if(i>j && i>k){
        if(j>k)
            printf("ascending: %d %d %d\n",i,j,k);
            printf("descending: %d %d %d\n",k,j,i);
        if(k>j)
            printf("ascending: %d %d %d\n",i,k,j);
            printf("descending: %d %d %d\n",j,k,i);
    }
    if(j>i && j>k){
        if(i>k)
            printf("ascending: %d %d %d\n",j,i,k);
            printf("descending: %d %d %d\n",k,i,j);
        if(k>i)
            printf("ascending: %d %d %d\n",j,k,i);
            printf("descending: %d %d %d\n",i,k,j);
    }
    if(k>j && k>i){
        if(j>i)
            printf("ascending: %d %d %d\n",k,j,i);
            printf("descending: %d %d %d\n",i,j,k);
        if(i>j){
            printf("ascending: %d %d %d\n",k,i,j);
            printf("descending: %d %d %d\n",j,i,k);
    }

}
