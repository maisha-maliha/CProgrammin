#include<stdio.h>

main(){
    printf("DIFFERENCE BETWEEN X++ AND ++X: \n\n");
    printf("FOR ++X: \n");
    int x=10,y=20;
    printf("%d %d\n", x,y);
    x=++y;
    printf("%d %d\n\n\n",x,y);
    printf("FOR X++:\n");
    int a=10,b=20;
    printf("%d %d\n", a,b);
    a=b++;
    printf("%d %d\n\n\n", a,b);
}
