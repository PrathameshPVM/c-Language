//Write a C program to calculate the distance between the two points
//d=
#include<stdio.h>
void main()
{
    system("cls");
	float x1, y1, x2, y2, dist;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
    printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	dist = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance between the said points: %f", sqrt(dist));
	printf("\n");
	
}