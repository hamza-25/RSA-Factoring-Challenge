#include "factors.h"

/**
 * print_fact_num - print nums that % is 0
 * @num: number to be cheched
*/
void print_fact_num(int num)
{
	int i = 2;

	for (; i < 10; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num / i, i);
			break;
		}
	}
}
