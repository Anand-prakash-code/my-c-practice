#include<stdio.h>

int main()
{ int day;// like 1 for monday and 7 for sunday 
printf("enter day 1-7\n ");
 scanf("%d",&day);

switch(day)
{ case 1: printf("monday\n");
  break;  
 case 2 :printf("tuesday");
break;
 default: printf("thanks");}

return 0;}
