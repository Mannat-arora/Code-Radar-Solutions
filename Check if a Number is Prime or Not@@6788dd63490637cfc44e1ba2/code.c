#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    if(a>1 && a%1==0 && a%a==0 && (!(a%b==0))){
        printf("Prime");
    } else{
        printf("Not Prime");
    }
    return 0;
}