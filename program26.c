/*
 0 to 35 fail
 35 to 50 pass class
 50 to 60 second class
 60 to 70 first class
 70 to 100 first class with distinction
*/

//switch case not possible because of range in this code

#include<stdio.h>

void DisplayClass(float fMarks)
{
 if((fMarks>0.0)&&(fMarks<35.0))
   {
     printf("you are fail\n");
   }
   else if((fMarks>=35.0)&&(fMarks<50.0))
    {
     printf("you are pass class\n");
   }
   else if((fMarks>=50.0)&&(fMarks<60.0))
   {
     printf("you are second class\n");
   }
   else if((fMarks>=60.0)&&(fMarks<70.0))
   {
     printf("you are first class\n");
   }
   else if((fMarks>=70.0)&&(fMarks<=100.0))
   {
     printf("you are first class with distinction\n");
   }
  else
   {
     printf("invalid marks\n");
   }
}


int main()
{
 float fValue=0.0;
 float fRet=0.0;
 printf("enter percentage\n");
 scanf("%f",&fValue);

 DisplayClass(fValue);
 
 return 0;
}
