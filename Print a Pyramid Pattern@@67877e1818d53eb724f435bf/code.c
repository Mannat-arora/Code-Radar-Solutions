#include <stdio.h>
int main(){
    int a,i,j,spaces;
    scanf("%d", &a);
    for(i=1; i<=a; i++){
        for(spaces=1; spaces<=a-1; spaces++){
            printf(" ");
        }
        for(j=1; j<=(2*i)-1; j++){
            printf("*");
        }
        printf("\n");
    }
}