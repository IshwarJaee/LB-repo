#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    register int iCnt=0;

     printf("Elements of array are : \n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("%d\t",Arr[iCnt]);

    }

}
int main()
{
    int *ptr=NULL;
    register int iCnt=0;
    int iSize=0;

    printf("Enter how many elements you want: \n");
    scanf("%d",&iSize);

    ptr=(int*)malloc(iSize*sizeof(int));

    printf("Enter elements: \n");

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
         scanf("%d",&ptr[iCnt]);
    }
    
        Display(ptr,iSize); //Display(100,4);
        free(ptr); //free(100);
    return 0;
}