#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        if(i==1){
            printf(" ");
        } 
        for(int j=1; j<=i; j++){
        printf("*");
        }
        printf("\n");
    }
}