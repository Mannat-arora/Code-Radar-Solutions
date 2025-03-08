// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     for(int i=1; i<=a; i++){
//         if(i==1){
//             printf(" ");
//         } 
//         for(int j=1; j<=i; j++){
//         printf("*");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main() {
    int n;
   
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print leading space for the first row
        if (i == 1) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
