#include <stdio.h>
int main(){
int a;
scanf("%d", &a);
for(int i=a; i>0; i--){
    printf(int"*"*i);
}
printf("\n");
}

// #include <stdio.h>

// int main() {
//     int a;
//     scanf("%d", &a);
    
//     for (int i = a; i > 0; i--) {
//         for (int j = 0; j < i; j++) {  // Loop to print '*' i times
//             printf("*");
//         }
//         printf("\n"); // Move to the next line
//     }
    
//     return 0;
// }
