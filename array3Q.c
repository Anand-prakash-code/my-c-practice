#include<stdio.h>

 int main (){
    int arrD []={ 1,2,3,4,5};
    int  *arr = &arrD[0] ;
    printf (" we got %d",*(arr+2));


    return 0;
 }