 #include<stdio.h>

int fact(int n) {
    if (n == 0 || n==1) {return 1;} // Base case
    else {
    return n*fact(n-1) ;} // Action
}
int main ()
{ int n=6;
printf("%d",fact(n));
    return 0 ;
}
