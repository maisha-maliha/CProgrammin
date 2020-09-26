#include<stdio.h>
int main(){
    float value;
    int taka,t1=0,t2=0,t5=0,t10=0,t20=0,t50=0,t100=0;
    scanf("%.2f",&value);
    taka=value*100;
    printf("%d\n",taka);
    if(value>=100){
        t100=value/100;
        taka=value-(t100*100);
    }
    if(taka>=50){
        t50=1;
        taka=taka-50;
    }
    t20=taka/20;
    taka=taka-t20*20;
    t10=taka/10;
    taka=taka-t10*10;
    t5=taka/5;
    taka=taka-t5*5;
    t2=taka/2;
    taka=taka-t2*2;
    t1=taka/1;
    taka=taka-t1;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100,00\n",t100);
    printf("%d nota(s) de R$ 50,00\n",t50);
    printf("%d nota(s) de R$ 20,00\n",t20);
    printf("%d nota(s) de R$ 10,00\n",t10);
    printf("%d nota(s) de R$ 5,00\n",t5);
    printf("%d nota(s) de R$ 2,00\n",t2);

    return 0;
}
