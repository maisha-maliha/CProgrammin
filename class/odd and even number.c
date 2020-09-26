#include<stdio.h>
main(){
    int a,b;
    scanf("%d",&a);
    if(a%2==0){
        printf("even number\n");
    } else{
        printf("odd number\n");
    }

    // check if some thing is divisible by 5
    scanf("%d",&b);
    if(b%5==0)
        printf("yes!! it is divisible by 5\n");
    else
        printf("not it is not divisible by 5\n");
}
