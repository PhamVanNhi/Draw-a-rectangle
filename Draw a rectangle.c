Draw-a-rectangle
================


/*******************************************************************************
--------Description-------------------------------------------------------------
Enter a screen two integers a and b. Then, Ouput to the screen a rectangle. This
is lenghth a and width b.
*******************************************************************************/
/*------------------------------------------------------------------------------ 
   Author: Jacob Pham
   Tools: C-Free 5.0
------------------------------------------------------------------------------*/   

#include <stdio.h>
#include <conio.h>

main()
{
	unsigned int a, b;
	unsigned char i, j, x, y;
	printf("Nhap chieu dai va chieu rong cua hinh chu nhat");
	printf("\nChieu dai la: ");
	scanf("%d",&a);
	printf("Chieu rong la: ");
	scanf("%d",&b);
	for(j=1;j<=a;j++)
	{
			printf("* ");
	}
	printf("\n");
	for(i=2;i<=b-1;i++)
	{
		printf("*");
		for(x=2;x<=2*a-2;x++)
			printf(" ");
		printf("*\n");
	}
	for(y=1;y<=a;y++)
		printf("* ");
}
