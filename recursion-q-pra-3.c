 //write a fxn to calculate % of student from marks in science ,math and sanskrit

 #include<stdio.h>

 float PercentMarks (float x,float y, float z);

 int main()
{float x,y,z,m;
printf("enter your marks in math ,sanskrit,and science\n ");
scanf("%f,%f,%f",&x,&y,&z);
m = PercentMarks (x,y,z); 
printf("so the percentage is %f\n",m);
return 0; // the return is must bcz it says that  the computer has completed the code successfullu withouy any error 
}

float PercentMarks (float x,float y,float z)
{
    return  (x+y+z)/300*100 ;
}


