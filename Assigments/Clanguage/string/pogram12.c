#include <stdio.h>

main() {
    int ctr = 0, a, freq = 0; // Declare variables for counting, iteration, and frequency
    int i, s, spc; // Variables to check for 'is ' pattern
    char str[100]; // Declare a character array to store the string

    printf("\n\nFind the number of times the word 'is ' in any combination appears :\n"); // Display information about the task
    printf("----------------------------------------------------------------------\n");

    printf("Input the string : ");
    fgets(str, sizeof str, stdin); // Read a string from the standard input (keyboard)

    ctr = strlen(str); // Calculate the length of the string

    /* Counts the frequency of the word 'is' with a trailing space */
    for (a = 0; a <= ctr - 3; a++) {
        // Check if the characters form 'is ' pattern (regardless of case)
        i = (str[a] == 'i' || str[a] == 'I');
        s = (str[a + 1] == 's' || str[a + 1] == 'S');
        spc = (str[a + 2] == ' ' || str[a + 2] == '\0');

        // Increment frequency if 'the ' pattern is found
        if ((i && s && spc) == 1)
            freq++;
    }

    printf("The frequency of the word \'is\' is : %d\n\n", freq); // Display the frequency of 'is '
	
	return 0; // Return 0 to indicate successful execution of the program
}
