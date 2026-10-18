#include<stdio.h>

int main ()
{int n=6;

    for (int i =1;i<=n;i++)
    { //for printing space
        for (int j=1;j<=n-i;j++)
        {printf(" ");}
     //for printing stars
     for (int j=1;j< 2*i ;j++)
     {printf("*");}
      printf("\n");
    }
return 0;

}
