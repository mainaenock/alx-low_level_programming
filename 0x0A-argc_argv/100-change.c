#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int num,count, i, ans;
	int cents[] = {25,10,5,2,1};
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
	}

	for (i = 0; i < 5; i++)
	{
		ans = num / cents[i];
		while (ans != 0)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return (0);
}



