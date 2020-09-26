#include<stdio.h>

int main(){
    char i,j,arr;
    scanf("%c",&arr);
    for(j=arr;j>'A';j=j-2){
        for(i='A';i<j;i++){
            if(i%2!=0){
                printf("%c",i);
            }
        }
        printf("\n");
    }

    return 0;
}
