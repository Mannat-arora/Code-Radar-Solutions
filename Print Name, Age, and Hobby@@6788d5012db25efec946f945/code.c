#include <stdio.h>

int main() {
   char name[50], hobby[50];
   int age;
   scanf("%s %d", &name, &age);
   scanf("%s", &hobby);
   printf("Name: %s/n", name);
   printf("Age: %d/n", age);
   printf("hobby: %s", hobby);
}