// #include <stdio.h>
// int main(){
//     int n,i,j;
//     scanf("%d", &n);
//     for(i=1; i<=n; i++){
//         for(j=1; j<=n; j++){
//             for(j=i-1; j>0; j--){
//                 printf("%d", j);
//             }
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print increasing numbers (1 to i)
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // Print decreasing numbers (i-1 to 1)
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n"); // Move to the next row
    }

    return 0;
}
