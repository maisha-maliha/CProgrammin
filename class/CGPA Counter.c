#include<stdio.h>
#include<conio.h>
int main(){
    int i;
    float cgpa;
    char ans;
    printf("Enter your CGPA: ");
    scanf("%f",&cgpa);
    if(cgpa==4.00){
        printf("A+");
    } else if(cgpa>=3.75){
        printf("A");
    } else if(cgpa>=3.50 && cgpa<3.75){
        printf("A-");
    } else if(cgpa>=3.25 && cgpa<3.50){
        printf("B+");
    } else if(cgpa>=3.00 && cgpa<3.25){
            printf("B");
    } else if(cgpa>=2.75 && cgpa<3.00){
        printf("B-");
    } else if(cgpa>=2.50 && cgpa<2.75){
        printf("C+");
    } else if(cgpa>=2.25 && cgpa<2.50){
        printf("C");
    } else if(cgpa>=2.00 && cgpa<2.25){
        printf("D");
    } else{
        printf("F");
    }
    getch();

    for(i=0;i<4;i++){
        if(ans=='y'){
            printf("Enter your CGPA: ");
            scanf("%f",&cgpa);
            if(cgpa==4.00){
                printf("A+");
            } else if(cgpa>=3.75 && cgpa<4.00){
                printf("A");
            } else if(cgpa>=3.50 && cgpa<3.75){
                printf("A-");
            } else if(cgpa>=3.25 && cgpa<3.50){
                printf("B+");
            } else if(cgpa>=3.00 && cgpa<3.25){
                printf("B");
            } else if(cgpa>=2.75 && cgpa<3.00){
                printf("B-");
            } else if(cgpa>=2.50 && cgpa<2.75){
                printf("C+");
            } else if(cgpa>=2.25 && cgpa<2.50){
                printf("C");
            } else if(cgpa>=2.00 && cgpa<2.25){
                printf("D");
            } else{
                printf("F");
            }
            getch();
            i=0;
        }
        if(ans=='n'){
            printf("Thank you for being with us. \n");
            break;
        }
        printf("Do you want to continue:y/n \n");
        scanf("%c",&ans);
        //getch();
        system("cls");

    }
    return 0;
}


