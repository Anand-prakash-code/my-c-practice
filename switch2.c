 //input an even no btw 1  to 20 and display the exponent value of 2
 #include<stdio.h>
#include<math.h>
 int main()
 { int x;
    printf("enter a number btw 1 to 20");
  scanf("%d",&x);
  
 int y = pow(2,x);

  printf(" so the exponent value of 2 to the power the number entered by user is %d",y);

 return 0;}
