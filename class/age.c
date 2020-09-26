#include<stdio.h>
#include<conio.h>
int main(){
    int i,age;
    char ans;
    printf("Enter your age:\n");
    scanf("%d",&age);
    if(age<=10){
        printf("You are a child\n");
    } else if(age>=11 && age<18){
        printf("You are a Teenager\n");
    } else if(age>=18 && age<=25){
        printf("You are Young\n");
    } else if(age>25 && age<40){
        printf("You are an Adult\n");
    } else{
        printf("You are Old\n");
    }
    getch();

    for(i=0;i<3;i++){
        if(ans=='y'){
            printf("Enter your age:\n");
            scanf("%d",&age);
            if(age<=10){
                printf("You are a child\n");
            } else if(age>=11 && age<18){
                printf("You are a Teenager\n");
            } else if(age>=18 && age<=25){
                printf("You are Young\n");
            } else if(age>25 && age<40){
                printf("You are an Adult\n");
            } else{
                printf("You are Old\n");
            }
            getch();
            i=0;
        }
        if(ans=='n'){
            break;
        }
        printf("Do you want to continue:y/n %d\n",i);
        scanf("%c",&ans);
        //getch();
        system("cls");

    }
    return 0;
}

