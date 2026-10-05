  #include<stdio.h>

int main ()
{  int n =7;
int prev1,prev2,curr;
    if (n<3){ printf ("no fabonicc possible");}
     else
    {printf("0 1 1 ");

 prev2=1;
 prev1=1;
    int count =1; 
    do { 
        curr= prev1 +prev2 ;
        prev2=prev1;
         prev1=curr;
     printf("%d ",curr);
    count++; }while(count<=n);}
 

return 0;
    
}


    
