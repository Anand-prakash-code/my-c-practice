 //Write a Program to check whether a number is prime or not.

 #include<stdio.h>
#include<math.h>

 int main ()
 { int n =17;
    if (n==1 || n==0)
    {printf("not prime\n");
    return 0;
}

 if(n>1)
 {for (int i=2;i<=sqrt(n);i++)
{ if (n%i==0){printf("not prime\n");
return 0;}
if (n%i !=0){printf("prime\n");
return 0;}}}

    return 0;
 }