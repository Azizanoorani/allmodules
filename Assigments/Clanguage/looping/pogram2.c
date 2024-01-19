#include<stdio.h>
 main()
{
 int i=0, number[5];
 for(i=0; i<5; i++) // This loop tracks array index 
 {
  printf("Enter your Number[%d]:",i);
  scanf("%d",&number[i]);
 }
 //Logic to print number array.
 for(i=0; i<5; i++) // This loop tracks array index 
 {
  printf("Number[%d]:%d \n", i, number[i]);
 }
}

