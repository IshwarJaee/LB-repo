#include<stdio.h>

void DisplayNonFactors(int iNo)
{
   int iCnt=0;

   if(iNo<0)  //updater
   {
       iNo=-iNo;
   }
             //iCnt<=iNo-1  
   for(iCnt=1;iCnt<iNo;iCnt++)
   {
       if((iNo%iCnt)!=0)
       {
           printf("%d\n",iCnt);
       }
   } 
}

int main()
{
    auto int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}

//Time Complexity:O(N/2) O for order
