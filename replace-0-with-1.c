//replace 0 with 1 in a given number ,worst part is 

#include<stdio.h>
#include<math.h>

 int main ()
 {   int n=409080;
  int sum=0 ;
  int i=0;
  while(n!=0){
    if (n%10==0) 
      sum = sum+ (int)round(pow(10,i)) ;
    else 
       sum = sum + (n%10)*((int)round(pow(10,i)));
    n=n/10;
     i++;
  }

  printf("%d",sum);
return 0;}