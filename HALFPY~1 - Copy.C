#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,rows;
	clrscr();
	printf("\nEnter the number of rows to print:");
	scanf("%d",&rows);

	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
			printf("\n");// TODO code application logic here
	}
	printf("\t");
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
			printf("\n");// TODO code application logic here
	}
	printf("\t");
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
			printf("\n");// TODO code application logic here
	}
	printf("\t");
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
			printf("\n");// TODO code application logic here
	}
	printf("\t");
	for(i=0;i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",j);
		}
			printf("\n");// TODO code application logic here
	}

	printf("\t");
	getch();
}
