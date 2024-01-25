#include<stdio.h>

int main()
{
    printf("Main Menu\n");
    int flag = 0;
    char str[100];
    int choice, num, i,l,length;
    unsigned long int fact;
    //int n, reversed = 0, remainder, original;

    while(1)
    {
        printf("1. Reverse \n");
        printf("2. Palindrome\n");
        printf("3. Odd\\Even\n");
        printf("4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                printf("Enter string:\n");
                scanf("%c", &str);
                fgets(str, sizeof str, stdin);
                 l =strlen(str);
                fact = 1;
                 for (i = l - 1; i >= 0; i--) 
				 {
                  printf("%c  ", str[i]); // Print each character in reverse order
                  }
                break;
                printf("\n");
        
        
            case 2:
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
                
            break;
            printf("\n");
            
            case 3:
                printf("Enter number:\n");
                scanf("%d", &num);
        
                if(num%2 == 0) // 0 is considered to be an even number
                    printf("\n\n%d is an Even number\n\n",num);
                else
                    printf("\n\n%d is an Odd number\n\n",num);
                break;
        
            case 4:
                printf("\n\n\t\t\tCoding is Fun !\n\n\n");
                //exit(0);    // terminates the complete program execution
        }
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
