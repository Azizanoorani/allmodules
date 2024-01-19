#include <stdio.h>

int main()
{
   char fname[20], mname[20], lname[20];

    /* Read the school name */

    printf("Enter full name in this format (first middle last): ");

    scanf("%s %s %s", fname, mname, lname);

     /* print abbreviated name */

    printf("Abbreviated name is %c. %c. %s\n", fname[0], mname[0], lname);

}
