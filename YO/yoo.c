#include<stdio.h>
#include<string.h>

int main(){
    int j,sum=0,t,l;
    char i,k;
    char s[100];
    scanf("%d",&t);

    for(j=0;j<t;j++){
        scanf("%s",&s);
        sum=0;

        for(k=97;k<=122;k++){
            if(s[0]==k){
                for(l=1;l<strlen(s);l++){
                    for(i='A';i<='Z';i++){
                        if(s[l]==i){
                            sum++;
                        }
                    }
                }
                if(sum<7){
                    printf("YES\n");
                    break;
                }
                else{
                    printf("NO\n");
                    break;
                }
            }
        }

        if(k==123){
            printf("NO\n");
        }
    }


    return 0;
}

