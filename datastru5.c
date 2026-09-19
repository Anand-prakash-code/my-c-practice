 #include<stdio.h>
  
typedef struct student { 
char name [100];
int roll;
float cgpa;}st;

void printinfo ( st s1);

int main (){
    st s1 ={ "anand", 50,9.2};
    printinfo ( s1);
    return 0;
}
void printinfo (st s1){ 
    printf (" student info \n");
    printf (" student name is %s\n",s1.name);
    printf (" student roll is %d \n", s1.roll);
    printf (" student cgpa is %0.10f\n", s1.cgpa);}
