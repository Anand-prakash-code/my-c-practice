 //write a programm to store the data of 3 students .

#include<stdio.h>
#include<string.h>

struct students { 
 char name[100];
 int roll ;
 float cgpa ;
};

int main (){
  struct students s1;
   s1.roll = 1;
   s1.cgpa = 9.2;
  strcpy ( s1.name , " anand");

 struct students s2 ;
 s2.roll = 2;
 s2.cgpa= 8 ;
 strcpy (s2.name , "aryan");

 struct students s3 ;
 s3.roll = 3;
 s3.cgpa= 8.3 ;
 strcpy (s3.name , "aman");

printf ( "student name =%s\n",s1.name);
printf (" student roll= %d\n",s1.roll);
printf(" student cgpa %f\n", s1.cgpa);

printf ( "\nstudent name =%s",s2.name);
printf ("\n student roll= %d",s2.roll);
printf("\n student cgpa %f", s2.cgpa);
printf("\n");

printf ( "\nstudent name =%s",s3.name);
printf ("\n student roll= %d",s3.roll);
printf("\n student cgpa %f", s3.cgpa);

return 0;
}
