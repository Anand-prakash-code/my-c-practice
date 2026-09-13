 #include<stdio.h>
#include<string.h>

 struct student {
 int roll ;
 float cgpa ;
 char name [100];};


 int main (){
 struct student s1 ;
 s1.roll =1664 ;
 s1.cgpa = 9.2 ;

  //s1.name = "student";
  strcpy (s1.name , "anand");

  printf ("student name =%s\n",s1.name);
  printf(" \nstudent roll no = %d",s1.roll);
  printf (" \n");
  printf ("\nstudenty cgpa =%f",s1.cgpa);


    return 0;
 }
 