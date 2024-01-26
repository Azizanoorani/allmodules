#include<stdio.h>

Reverse()
   {
	int i,l;
	char str[100];
	unsigned long int fact;
    printf("Enter string:\n");	
    scanf("%c", &str);
    fgets(str, sizeof str, stdin);
    l =strlen(str);
    fact = 1;
    for (i = l - 1; i >= 0; i--) 
	{
    printf("%c  ", str[i]); // Print each character in reverse order
    }
    printf("\n");
}
Palindrome()
{
	int flag = 0;
    char c;
    char str[100];
    int choice, num, i,l,length;
    unsigned long int fact;
	printf("Enter a string: ");
    scanf("%s", str);
    // Calculate the string length
    length = strlen(str);

    // Compare characters from the start and end of the string
    // and stop if a mismatch is found or the middle of the string is reached.
    for (i = 0; i < length / 2; i++) 
	{
    if (str[i] != str[length - i - 1]) 
	{
    flag = 1;
    break;
    }
    }
    // Output the result
    if (flag) 
	{
        printf("%s is not a palindrome\n", str);
   }  
	else
	{
        printf("%s is a palindrome\n", str);
    }
    printf("\n");
}
Stringcopy()
{
	char a[30]="Aziza Noorani";
	char b[30];
	
	strcpy(b,a);
	
	printf("String is : %s",a);
	printf("\nstring is : %s",b);
	printf("\n");
}
Stringlength()
{
   char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);

    printf("The length of the string is: %d\n", len);
    printf("\n");
}
Frequencyofcharacter()
{
	int i, count=0;
    char str[100], ch;
    printf("Enter the String: \n");
    scanf("%c",&ch);
    gets(str);
    printf("Enter any character (present in string) to find its frequency: ");
    scanf("%c", &ch);
    for(i=0; str[i]!='\0'; i++)
    {
        if(ch==str[i])
            count++;
    }
    printf("\nFrequency of %c = %d", ch, count);
    printf("\n\n%c occurs %d times in %s", ch, count, str);
    getch();
 printf("\n");
}
findspaceinstring()
{
	char str[100];
    int i;
    int space=0;
    printf("Enter a string\n");
    scanf("%c",&str);
    gets(str);
    i=0;
    while(i<=str[i]){
    if(str[i]==' ')
   {
        space++;
   }
    i++;
}
    printf("Total white space :%d ",space);
    getch();
    return 0;
    printf("\n");
}
Concatenation()
{
	char string1[20], string2[20];
    int i, j; /*  Initialize the string to NULL values */
    memset(string1, 0, 20);
    memset(string2, 0, 20);
    printf("Enter the first string : ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
    printf("First string  = %s\n", string1);
 
    /*  Concat the second string to the end of the first string */
    printf("Second string = %s\n", string2);
    for (i = 0; string1[i] != '\0'; i++)
    { 
     /*  null statement: simply traversing the string1 */ ;
    }
    for (j = 0; string2[j] != '\0'; i++)
    {
        string1[i] = string2[j++];
    } /*  set the last character of string1 to NULL */
    string1[i] = '\0';
    printf("Concatenated string = %s\n", string1);
    printf("\n");
}

main()
{  int choice;
	 while(1)
    {
        printf("1. Reverse \n");
        printf("2. Palindrome\n");
        printf("3. Consant or Vowel\n");
        printf("4. String  copy\n");
        printf("5. String Length\n");
        printf("6. Frequency of character\n");
        printf("7. Find number of blank spaces and digits\n");
        printf("8. Concatenation\n");
        printf("9. Exit\n\n\n");
        printf("Enter your choice :  \n");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
	        Reverse();
	        break;
	        
	        case 2:
	        Palindrome();
	        break;
	        
	        case 3:
	        Reverse();
	        break;
	        
	        case 4:
	        Stringcopy();
	        break;
	        
	        case 5:
	        Stringlength();
	        break;
	        
	        case 6:
	        Frequencyofcharacter();
	        break;
	        
	        case 7:
	        findspaceinstring();
	        break;
	        
	        case 8 :
	        Concatenation();
	        break;
	        	
	   }
   }
}
