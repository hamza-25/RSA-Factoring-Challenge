#include "factors.h"

/**
 * print_fact_num - print nums that % is 0
 * @num: number to be cheched
*/
void print_fact_num(u_int32_t num)
{
	u_int32_t i = 2;

	for (; i < num; i++)
	{
		if (num % i == 0)
		{
			printf("%d=%d*%d\n", num, num / i, i);
			break;
		}
	}
}
