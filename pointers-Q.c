#include<stdio.h>

int main ()
{  int *ptr ;//*ptr mean the value stored at the memory address to which ptr is pointing towards the variable
   int x;
    
   ptr =&x;
   *ptr =0 ;
   printf("ptr value is  %d\n",x);
   printf(" ptr = %d \n ",*ptr);

   *ptr+=5 ;
     printf("x is = %d\n",x);
     printf(" *ptr is %d\n",*ptr);
      
     

     (*ptr)++ ;
     printf(" x is %d\n",x);
     printf (" *ptr is %d\n",*ptr);
    
    
    return 0;   }