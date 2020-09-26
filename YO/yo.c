#include<stdio.h>
#include<string.h>
int main(){
    int x,x1,x2,y,y2,y1,sum=0,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        if(x2>x1){
            x=x2-x1;
        }
        else if(x1>x2){
            x= x1-x2;
        } else{ x=0; }

        if(y2>y1){
            y=y2-y1;
        }
        else if(y1>y2){
            y= y1-y2;
        } else{ y=0; }

        sum= x+y;
        printf("%d\n",sum);
    }

    return 0;
}
