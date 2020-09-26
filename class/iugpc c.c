#include<stdio.h>
int main(){
    int i,j,k,t,x;
    int number=0;
    int A[100];
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&A[i]);
    }
// i is for  the position of j in A[i] to replace it with A[k]
    for(i=0;i<t;i++){
// j is from 1 to 100 to see if the number exists
        for(j=0;j<100;j++){
// k is iterating in the array to see if j value exists in the array
            for(k=0;k<t;k++){
                if(A[k]==j){
                    if(A[k]!=A[i]){
                    // replacing the value of A[k] with A[i]
                        x=A[i];
                        A[k]=x;
                        A[i]=j;
                        // counting the number of times digits are replaced
                        number++;
                        for(i=0;i<t;i++){
                            printf("%d ",&A[i]);
                        }
                        printf("\n");
                        break;
                    }
                    if(A[k]==A[i]){
                        break;
                    }
                }
            }
            if(A[k]==x || A[k]==A[i]){
                break;
            }
        }
    }
    if(number<=3){
        printf("YES\n");
        printf("total :%d",number);
    } else{
        printf("NO\n");
        printf("total: %d",number);
    }
    return 0;
}
