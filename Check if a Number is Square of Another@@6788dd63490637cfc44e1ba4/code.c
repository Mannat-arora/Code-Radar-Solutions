// #include <stdio.h>
// #include <math.h>

// int main() {
//    int a,b;
//     scanf("%d %d", &a, &b);
//     b = sqrt(a);
//     (b*b==a)?printf("Yes"):printf("No");
// }

#include <stdio.h>
#include <math.h>

int main() {
    int num, squareRoot;
    printf("Enter a number: ");
    scanf("%d", &num);

    squareRoot = sqrt(num); // Get the integer square root

    // Check if squaring the integer squareRoot gives back the original number
    if (squareRoot * squareRoot == num) {
        printf("%d is a perfect square.\n", num);
    } else {
        printf("%d is NOT a perfect square.\n", num);
    }

    return 0;
}
