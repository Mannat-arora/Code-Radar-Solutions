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
    
    if (islower(a)) {  // Removed the dot (.)
        printf("Lowercase");  // Corrected output message
    } else {
        printf("Uppercase");  // Corrected output message
    }

    return 0;
}