#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number,reverse_num=0,storage=0; /*Variable Declaration*/
   printf("Enter the number you want to reverse: "); /*prompt for number input*/
   scanf("%d",&number);
   storage=number; /* storing the scanned number into another variable for later */
   while(number!=0)
    {
        reverse_num=number%10+(10*reverse_num); /* number%10 will always give the last digit of that number as an answer*/
        printf("\n\nReverse of %d is %d\n\n\n\n",storage,reverse_num);
        number=number/10; /* this is to make the condition false or to control the loops repetitions*/
    }
    printf("\n\nReverse of %d is %d\n\n\n\n",storage,reverse_num); /*to print the output*/
    return 0;
}
