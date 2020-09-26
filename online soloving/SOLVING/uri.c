#include<stdio.h>
int main(){
    int taka,value,t100,t50=0,t20=0,t5=0,t2=0,t1=0;
    scanf("%d",&taka);
    t100=taka/100;
    value=taka-(t100*100);
    printf("taka - value = %d",value);

    if(value>=50){
        value=value-50;
        t50++;
        if(value>=40 && value!=0){
            value=value-40;
            t20=2;
        }printf("%d\n",value);
        if(value<40 && value!=0){
            value=value-20;
            t20++;
        }
        printf("%d\n",value);
        if(value>5){
            t5=(value/5);
            value=value-t5*5;
        }
        printf("%d\n",value);
        t2=value/2;
        value=value-t2*2;printf("%d\n",value);
        t1=value;
        value=t100+t50+t20+t5+t1;
        if(value=taka){
            printf("%d\n",taka);
            printf("%d nota(s) de R$ 100,00\n",t100);
            printf("%d nota(s) de R$ 50,00\n",t50);
            printf("%d nota(s) de R$ 20,00\n",t20);
            printf("%d nota(s) de R$ 5,00\n",t5);
            printf("%d nota(s) de R$ 2,00\n",t2);
            printf("%d nota(s) de R$ 1,00\n",t1);
        }
    }else{
        if(value>=40 && value!=0){
            value=value-40;
            t20=2;
        }
        if(value<40 && value!=0){
            value=value-20;
            t20++;
        }
        printf("%d\n",value);
        if(value>5){
            t5=(value/5);
            value=value-t5*5;
        }
        printf("%d\n",value);
        t2=value/2;
        value=value-t2*2;
        printf("%d\n",value);
        t1=value;
        value=t100+t50+t20+t5+t1;
        if(value=taka){
            printf("%d\n",taka);
            printf("%d nota(s) de R$ 100,00\n",t100);
            printf("%d nota(s) de R$ 50,00\n",t50);
            printf("%d nota(s) de R$ 50,00\n",t20);
            printf("%d nota(s) de R$ 50,00\n",t5);
            printf("%d nota(s) de R$ 50,00\n",t2);
            printf("%d nota(s) de R$ 50,00\n",t1);
        }
    }
    return 0;
}
