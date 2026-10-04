 #include<stdio.h>
 #include<math.h>
 
 #include<stdbool.h>

 bool prime(int n)
 { if (n==0||n==1 )
    {return false ;}  
    
   for ( int i =2; i <= sqrt(n); i++ )
   {  if (n % i==0)
{return false ;}} 

return true ;
}

 int main ()
 {int N=100;
  for (int i=1 ;i<=N ;i++)
  { if (prime(i))
{printf("%d ",i);}}
      return 0 ;    
 }