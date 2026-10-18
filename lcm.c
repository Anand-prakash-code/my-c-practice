 #include<stdio.h>

 int main ()
 { int a=5;
    int b= 10;
   int i =1;
   int max;
   max= (a>b)?a:b;
   min =(a<b)?a:b;
    while(a!=0 && b!=0 )
    { if(min*i%max==0
    ){ printf("lcm is %d ",a*i);
        return 0;}
    else   i++; 
    }



    return 0;
 }
