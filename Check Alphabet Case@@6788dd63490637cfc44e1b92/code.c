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
        printf("Lowercase\n");
    } else if (isupper(a)) {  
        printf("Uppercase\n");
    } else {
        printf("Not a letter\n");  // Handles numbers, symbols, spaces, etc.
    }

    return 0;
}