#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    if(a.islower()){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
}