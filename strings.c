 // create a string first name and last name to store details of user and print all the characters using a loop 
 
 #include<stdio.h>

 char printstring ( char arr []);

 int main (){ 
     char firstname []= "anand";
     char lastname [] = "prakash";
     printstring ( firstname );
     printstring (lastname);
return 0;    
 }

 char printstring ( char arr [])
 { for ( int i=0; arr [i]!='\0'; i++)
{ printf ("%c ", arr [i]);}
printf(" \n"); }
