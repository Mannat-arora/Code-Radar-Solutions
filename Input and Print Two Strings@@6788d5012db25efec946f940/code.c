#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char str[100], a[100];
   scanf("%s %s", &str, &a);
   printf("You entered: %s and %s", str, a);
   return 0;
}