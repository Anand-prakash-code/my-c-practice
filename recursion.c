 #include<stdio.h> 
  
 int sum(int n);
 int main () { 
    printf("sum is %d", sum(0));
    return 0;
 }
//recursion fxn
int sum( int n){
if (n==1){return 1;}

return n +sum (n-1);} //correct recfursive call


