#include <stdio.h>
int addNumbers(int a, int b);

void main() 
{
	int n1, n2, sum;

	printf("Enters two numbers: ");
	scanf("%d %d", &n1, &n2);

	sum = addNumbers(n1, n2);
	printf("sum = %d", sum);
}

int addNumbers(int a, int b)
{
	int result;
	result = a+b;
	return result;
}
