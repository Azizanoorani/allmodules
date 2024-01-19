#include <stdio.h>

 main() {
   float l, w, h,A;

   printf("Enter Length: ");
   scanf("%d", &l);

   printf("Enter Width: ");
   scanf("%d", &w);
   
   printf("Enter Height: ");
   scanf("%d", &h);
   

   A = 2 *(l * h* w);


   printf("The area  of the rectangular prism: %f\n", A);
}
