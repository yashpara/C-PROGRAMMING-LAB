#include <stdio.h>
 
int main()
{
    int number;
     
    //input an integer number
    printf("Please input an integer number: ");
    scanf("%d",&number);
         
    //check 0th bit of number is 1 or 0
    (number & 0x01) ? printf("%d is an EVEN Number.", number) :  printf("%d is an ODD Number.",number) ;
     
    printf("\n";)
    return 0;   
}
