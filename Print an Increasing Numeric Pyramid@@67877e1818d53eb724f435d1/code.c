#include <stdio.h>
int main(){
    int a,i,j;
    scanf("%d", &a);
    if(a==1){
        printf("1");
    }
    for(i=1; i<=a; i++){
        for(j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}