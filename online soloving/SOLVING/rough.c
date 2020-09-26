#include<stdio.h>

typedef struct {
    int id;
    float m;
    char g;
} student;
char findGrade(student p){
    char g;
    if(p.m >= 90) g = 'A';
    else if (p.m >= 80) g = 'B';
    else if (p.m >= 70) g = 'C';
    else if (p.m >= 60) g = 'D';
    else g = 'F';
    return g;
}
int main(){
    student s;
    printf("Enter ID: ");
    scanf("%d",&s.id);
    printf("Enter Mark: ");
    scanf("%f",&s.m);
    s.g = findGrade(s);
    printf("ID: %d Mark: %f Grade: %c", s.id, s.m, s.g);

    return 0;
}
