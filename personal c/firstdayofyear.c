#include<stdio.h>
int main(){
    int x,y,d,i,year,v = 0;
    printf("enter year:");
    scanf("%d",&y);
    year = y;
    if(y>2001){
        x = y - 2001;
    } else {
        x = 2001 - y;
    }
    for(i = 0; i < x-1; i++){
        if((year%4==0 || year%400==0) && year%100!=0){
            d = 366;
        } else {
            d =365;
        }
        v += d;
        if(y>2001){
            year--;
        } else {
            year++;
        }
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
    }
    return 0;
}
