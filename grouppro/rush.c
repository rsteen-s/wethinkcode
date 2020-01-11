#include <unistd.h>
#include <stdio.h>

void rush(int x, int y)
{
	x = x - 2;
	printf("o");

	while(x>0)
	{
		printf("-");
		x--;

	}
	printf("o\n");
	x = x + 3;
	y = y - 2;
	while(y>0)
	{
		printf("|");
			while(x>0)
			{ 
				printf(" ");
				x--;
			}
		x = x + 3;
		printf("|\n");
		y--;
	}

	printf("o");

	while(x>0)
	{
		printf("-");
		x--;
	}
	printf("o\n");
}

int main()
{
	rush(5,5);
	return 0;
}
