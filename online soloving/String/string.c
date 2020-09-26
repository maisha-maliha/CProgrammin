#include<stdio.h>
#include<string.h>
main(){
    int i,j,sum=0;
    char letter[56]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char name[100];

    scanf("%s",&name);
    printf("the name is: %s\n",name);
    printf("size of name:%d\n\n",strlen(name));

    for(j=0;j<=strlen(name)-1;j++){
        for(i=0;i<=55;i++){
            if(letter[i]==name[j]){
                printf("%c is in number %d position.\n",name[j],i+1);
                sum= sum+i+1;
                break;
            }
        }
    }
    printf("\nsum = %d\n\n",sum);
    for(i=2;i<=sum;i++){
        if(sum%i==0){
            printf("It is not a prime word.\n");
            break;
        }
    }
    if(i==sum){
        printf("It is a prime word.\n");
    }

}
