#include<stdio.h>

void printhello() ;      // fxn declaration/prototype
void printgoodbye();

int main ()
{ printhello ();       //fxn call
printgoodbye();
return 0;}

void printhello()            // fxn definition
{ int x = 1;
     printf("hello\n");
    scanf("%d",&x);
 do
 {   if(x>=5) break;                                     //use of do while loop and break in if
    printf("how are you sir/mam\n");
    x++;}
    while (x<=5);
}
void printgoodbye()
{ printf("goodbye");} 