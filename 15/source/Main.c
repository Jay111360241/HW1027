#include <stdlib.h>
#include <stdio.h>

int maximum(int x, int y, int z);

int main(void)
{
	int number1;
	int number2;
	int number3;
	printf("Enter three integers:");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	printf("Maximum is %d", maximum(number1, number2, number3));
	system("pause");
	return 0;
}

int maximum(int x, int y, int z)
{
	int max = x;

	if (y > max)
	{
		max = y;
	}
	if (z > max)
	{
		max = z;
	}

	return max;

}