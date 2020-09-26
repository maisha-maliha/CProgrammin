#include<stdio.h>

void main(){
    char s[1000];
    int i;
    printf("Enter a string: ");
    scanf("%s", s);
    for(i = 0; s[i] != '\0'; ++i);
    printf("Length of string: %d\n\n\n", i);


    printf("LET'S SEE IF YOUR GIFT BOX WILL FIT IN THE BRIEFCASE:\n\n");
    int n=20;
    int gl, gw, gh;
    scanf("%d %d %d", &gl, &gw, &gh);
    if (gl<=n && gw<=n && gh<=n){
        printf("IT FITS\n\n\n\n");
    } else{
        printf("IT DOESN\'T FIT\n\n\n\n");
    }
    printf("LET\'S FIND IF IT IS A LEAP YEAR:\n\n");
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if(year%400==0 || (year%4==0 && year%100!=0)){
        printf("\nIT IS A LEAP YEAR");
    } else{
        printf("\nIT IS NOT A LEAP YEAR");
    }
    printf("\n\n\n\nCONDITIONS IN C PROGRAMMING LANGUAGE\n\n");
    printf("Lets find your GPA:\n\n");


    int mark;
    printf("Enter your marks: \n");
    scanf("%d", &mark);

    printf("IF:\n");

    if(mark<=100){
        printf("\nA+");
    }
    if(mark<=80){
        printf("\nA");
    }
    if(mark<=70){
        printf("\nA-");
    }
    if(mark<=60){
        printf("\nB");
    }

    printf("\nIF ELSE: \n");

    if(mark<50){
        printf("\nyou failed\n");
    } else{
        printf("\nyou passed\n");
    }

    printf("\n\nIF ELSE IF:");

    if(mark>=80){
        printf("\nA+");
    }
    else if(mark>=70){
        printf("\nA");
    }
    else if(mark>=60){
        printf("\nA-");
    }
    else if(mark<60){
        printf("FAILES");
    }

    printf("\n\nIF ELSE IF ELSE:");

    if(mark>=80){
        printf("\nA+");
    }
    else if(mark>=70){
        printf("\nA");
    }
    else if(mark>=60){
        printf("\nA-");
    }
    else{
        printf("\nThis not in marking range\n");
    }



}
