#include<stdio.h>  

  int fact(int n);

  int main()
  { printf(" factorial is %d",fact(8));
    return 0;}
 
    //recursion fxn
    int fact (int n){
    if(n==1)  {return 1;}

    return fact(n-1)*(n);}
