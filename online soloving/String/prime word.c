#include<stdio.h>
#include<string.h>
int main(){
    int i,j;
    char letter[52]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char name[100];
    while(scanf("%s",&name)!=EOF){
            int sum=0;
            for(i=0;i<strlen(name);i++){
                for(j=0;j<52;j++){
                    if(name[i]==letter[j]){
                        sum = sum + j + 1;
                        break;
                    }
                }
            }
            for(i=2;i<sum;i++){
                if(sum%i==0){
                    printf("It is not a prime word.\n");
                    break;
                }
            }
            if(sum==i || sum==1){
                printf("It is a prime word.\n");
            }
    }
    return 0;
}
