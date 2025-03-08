#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d", &a);
    if(a==1){
        printf("*");
    }
    for(i=2; i<=a; i++){
        for(j=0; j<=a-i; j++){
            printf(" ");
        }
        for(j=2; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}