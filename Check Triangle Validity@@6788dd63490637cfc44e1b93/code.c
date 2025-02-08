#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d", &a, &b, &c);
    if((a+b)>c || (a+c)>d || (b+c)>a){
        printf("Valid");
    } else{
        printf("Invalid");
    }
}