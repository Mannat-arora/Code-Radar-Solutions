#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(i = a; i > 0; i--){
        for(j = a;j > 0; j--){
            printf("* ");
        }
        printf("\n");

    }

}

// #include <stdio.h>

// int main() {
//     int a;
//     scanf("%d", &a);
    
//     for (int i = a; i > 0; i--) {
//         for (int j = i; j > 0; j--) {  // Loop to print '*' i times
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }
    
//     return 0;
// }
