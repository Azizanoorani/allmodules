#include <stdio.h>

 main() {
   float length, width, cf;

   printf("Enter the length of the rectangle: ");
   scanf("%f", &length);

   printf("Enter the width of the rectangle: ");
   scanf("%f", &width);

   cf = 2* (length * width);

   printf("The cf of the rectangle is: %f\n", cf);
}
