#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    if(.islower(a)){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
}