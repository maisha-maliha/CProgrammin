#include<stdio.h>
int main(){
    int x,y,d,i,year,v = 0;
    printf("enter year:");
    scanf("%d",&y);
    if(y>2001){
        year = 2001;
        x = y - 2001;
    } else {
        x = 2001 - y;
        year = y;
        v++;
    }
    for(i = 0; i < x; i++){
         if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0)){
            d = 366;
            printf("%d ",d);
        } else {
            d =365;
            printf("%d ",d);
        }
        v += d;
        printf("%d year = %d\n",v,year);
        year++;
    }
    if(v%7==0){
        printf("in the year %d the 1st day is monday",y);
    } else if(v%7==1){
        printf("in the year %d the 1st day is tuesday",y);
    } else if(v%7==2){
        printf("in the year %d the 1st day is wednesday",y);
    } else if(v%7==3){
        printf("in the year %d the 1st day is thurday",y);
    }else if(v%7==4){
        printf("in the year %d the 1st day is friday",y);
    } else if(v%7==5){
        printf("in the year %d the 1st day is saturday",y);
    } else if(v%7==6){
        printf("in the year %d the 1st day is sunday",y);
    } else{
        printf("in the year %d the 1st day is monday",y);
    }
    return 0;
}
