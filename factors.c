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
/**
 * main - entry point
 * @argv: arguments vector
 * @argc: number of args
 * Return: 0 if success otherwise 1
*/
int main(int argc, char *argv[])
{
	FILE *fd;
	char line[50];
	long int num;

	if (argc != 2)
	{
		printf("Usage: <file> file_number\n");
		exit(1);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		printf("cant open file\n");
		exit(1);
	}
	while (fgets(line, sizeof(line), fd) != NULL)
	{
		num = atoi(line);
		print_fact_num(num);
	}
	fclose(fd);
	return (0);
}
