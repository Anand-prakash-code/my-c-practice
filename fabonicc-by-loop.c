 #include<stdio.h>

int main ()
{  int n =7;
    
    if (n<3){ printf ("no fabonicc possible");}
     int prev1=0;
     int prev2=1;
     int curr;
     curr<=n;
    if (n>=3)
    { curr= prev1 +prev2 ;
        prev2=prev1;
         prev1=curr;
     printf("%d",curr);}



    
}