#include "calculator.h"

/**
 * main - a simple calculator
 * Return: 0 for success
 */

int main(void)
{
	char op;
	int a;
	int b;
	int answer;

	printf("Choose math operation you'd like done(choose +, -, *, or /): ");
	scanf("%c", &op);
	printf("\nPlease tell us your two numbers (ex: '1 2'): ");
	scanf("%d %d", &a, &b);

	if (op == '+')
	{
		answer = _add(a, b);
		printf("Your Answer is: %d\n", answer);
	}
	else
	{
		printf("Calculator is broken :( should have chose addition\n");
	}

	return (0);
}

int _add(int a, int b)
{
	return (a + b);
}
