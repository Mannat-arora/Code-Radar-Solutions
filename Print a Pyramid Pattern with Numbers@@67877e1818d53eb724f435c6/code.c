#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d", &n);
    // if(n==1){
    //     printf("1");
    // }
    for(i=1; i<=n; i++){
        for(j=0; j<n-i; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}