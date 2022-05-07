#include <stdio.h>
int n1, n2, n3, i, j, k;
struct poly
{
	int expo;
	int coeff;
}x1[10],x2[10],x3[10];
void input();
void print();
void add();
int main()
{
	printf("Enter the number of elements in first polynomial: ");
	scanf_s("%d", &n1);
	printf("Enter the number of elements in second polynomial: ");
	scanf_s("%d", &n2);
	input();
	add();
	print();
	return 0;
}

void input()
{
	printf("First polynomial is \n");
	for (i = 0; i < n1; i++)
	{
		printf("Enter the coefficient of first polynomial: ");
		scanf_s("%d", &x1[i].coeff);
		printf("Enter the exponent of first polynomial: ");
		scanf_s("%d", &x1[i].expo);
	}
	printf("Second polynomial is \n");
	for (j = 0; j < n2; j++)
	{
		printf("Enter the coefficient of second polynomial: ");
		scanf_s("%d", &x2[j].coeff);
		printf("Enter the exponent of second polynomial: ");
		scanf_s("%d", &x2[j].expo);
	}
}

void add()
{
	i = 0;
	j = 0;
	k = 0;
	while ((i < n1) && (j < n2))
	{
		if (x1[i].expo > x2[j].expo)
		{
			x3[k].coeff = x1[i].coeff;
			x3[k].expo = x1[i].expo;
			k = k + 1;
			i = i + 1;
		}
		else if (x1[i].expo < x2[j].expo)
		{
			x3[k].coeff = x2[j].coeff;
			x3[k].expo = x2[j].expo;
			k = k + 1;
			j = j + 1;
		}
		else
		{
			x3[k].coeff = x1[i].coeff + x2[j].coeff;
			x3[k].expo = x1[i].expo;
			k = k + 1;
			j = j + 1;
			i = i + 1;
		}
	}
	while (i < n1)
	{
		x3[k].coeff = x1[i].coeff;
		x3[k].expo = x1[i].expo;
		k = k + 1;
		i = i + 1;
	}
	while (j < n2)
	{
		x3[k].coeff = x2[j].coeff;
		x3[k].expo = x2[j].expo;
		k = k + 1;
		j = j + 1;
	}
	n3 = k;
}

void print()
{
	printf("\nX1: ");
	for (i = 0; i < n1; i++)
	{
		printf("%d x ^ %d+", x1[i].coeff, x1[i].expo);
	}
	printf("\nX2: ");
	for (j = 0; j < n2; j++)
	{
		printf("%d x ^ %d+", x2[j].coeff, x2[j].expo);
	}
	printf("\nX3: ");
	for (k = 0; k < n3; k++)
	{
		printf("%d x ^ %d+", x3[k].coeff, x3[k].expo);
	}
}
