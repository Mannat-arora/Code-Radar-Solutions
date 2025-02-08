// #include <stdio.h>
// #include <ctype.h>

// int main() {
//     char a;
//     scanf("%c", &a);
//     if(.islower(a)){
//         printf("Uppercase");
//     }else{
//         printf("Lowercase");
//     }
// }

#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    
    if (islower(a)) {  
        printf("Lowercase");
    } else if (isupper(a)) {  
        printf("Uppercase");
    } else {
        printf("Not an alphabet");  // Handles numbers, symbols, spaces, etc.
    }

    return 0;
}