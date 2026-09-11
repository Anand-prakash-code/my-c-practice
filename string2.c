 #include<stdio.h>

 char yourname ( char arr []);

 int main (){
  char name [100];
   scanf("%s",name);
    yourname(name);
   return 0;
 }

 char yourname( char arr []){
 
    printf ( "your name is  %s.Thanks for participation.",arr);

 }