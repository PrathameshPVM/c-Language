//Write a C program that accepts three integers and find the maximum of three.
#include <stdio.h> 
void main()
{
    system("cls");
    int num1, num2, num3;
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if (num1>num2&&num1>num3)
    {
        printf("num1 is the greatest among three \n");
    }
    else if (num2>num1&&num2>num3)
    {
        printf("num2 is the greatest among three \n");
    }
    else
    {
        printf("num3 is the greatest among three \n");
    }
    
}