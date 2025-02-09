#include <stdio.h>
#include <math.h>

int main() {
   int a,b;
    scanf("%d %d", &a, &b);
    b = sqrt(a);
    (b*b==a)?printf("Yes"):printf("No");
}