#include<stdio.h>
main()
{
  float principal = 10000;  
  float rate = 5;   
  float time = 2;  
  
  // Calculating compound Interest 
  float Amount = principal *((pow((1 + rate / 100),time))); 
  float CI = Amount - principal; 
   
  printf("Compound Interest is : %lf",CI); 

}
