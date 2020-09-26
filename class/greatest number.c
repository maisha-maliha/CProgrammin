#include<stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if( (a>b || a==b) && (a>c || a==c) && (a>d || a==d) ){
        printf("A\n");
    }
    if( b>a && (b>c || b==c) &&(b>d || b==d)){
        printf("B\n");
    }
    if(c>b && c>a && (c>d || c==d) ){
        printf("C\n");
    }
    if(d>b && d>c && d>a){
        printf("D\n");
    }

    return 0;
}
