#include<stdio.h>  
main()   
{ 
    float Fahrenheit, Celsius;  
    printf("Enter Fahrenheit : ");
	scanf("%f",&Fahrenheit) ; 
	  
    Celsius = ((Fahrenheit-32)*5)/9;  
    printf("\n\n Temperature in Celsius is : %f",Celsius);  
  
  }  
