#include<stdio.h>  // For input and output

main()
  {  // Start of the program

    char str1[100], str2[100];  // Spaces for user's strings
    int i = 0;  // Counter for going through strings

    // Get strings from the user
    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Go through and compare the strings
    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] > str2[i]) {
        printf("String 1 comes after String 2.\n");
    } else if (str1[i] < str2[i]) {
        printf("String 1 comes before String 2.\n");
    } else {
        printf("Both strings are the same.\n");
    }

    return 0;  // End the program

}
