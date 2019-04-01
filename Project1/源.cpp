#include <stdio.h>


int returnInt(int i)
{
	if (i <= 0)
	{
		return 1;
	}
	else
	{
		return i * (i - 1);
	}
}

int main()
{
	printf("Hello world\n");

	printf("%d\n", returnInt(5));

	return 0;
}