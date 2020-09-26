#include<stdio.h>

int main(){
    int roll,i,option;
    char name[100];
    printf("What do you want to do?\n");
    printf("1: View My Result.\n");
    printf("2: View All Result\n");
    printf("Enter Option Number(1/2): ");
    scanf("%d",&option);

    printf("\n");

    if(option==1){
        printf("Enter your Name: ");
        scanf("%s",&name);
        printf("\n");
        printf("Enter your Roll: ");
        scanf("%d",&roll);
        printf("\n");

        printf("NAME\t\tRESULT\n");
        if(roll==1){
            printf("Minhazul Islam\t 250");
        } else if(roll==2){
            printf("Shahnaz Nur Akther\t 360");
        } else if(roll==3){
            printf("Maisha Maliha\t 200");
        } else if(roll==4){
            printf("Shadman Shakib \t 250");
        } else {
            printf("Invalid Name or Roll.\n");
        }
    }

    if(option==2){
        printf("NAME \t\t ROLL\n\n");
        printf("Minhazul Islam - 250\n\n");
        printf("Shahnaz Nur Akther - 360\n\n");
        printf("Maisha Maliha - 200\n\n");
        printf("Shadman Shakib - 250\n\n");
    }

    return 0;
}


