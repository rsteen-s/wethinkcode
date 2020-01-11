#include <unistd.h>
#include <stdio.h>

void rush(int x, int y)
{
	int x2;
	int x3;
	int x0;

	x0=x;
	x0 = x0 - 2;

	write(1,"o",1);
	
	while(x0>0)
	{
		write(1,"-",1);
		x0--;

	}
	write(1,"o\n",2);
	
	y = y - 2;
	while(y>0)
	{
		write(1,"|",1);
		x2=x;
		x2=x2-2;
			while(x2>0)
			{ 
				write(1," ",1);
				x2--;
			}
		
		write(1,"|\n",2);
		y--;
	}

	write(1,"o",1);
	x3=x;
	x3=x3-2;
	while(x3>0)
	{
		write(1,"-",1);
		x3--;
	}
	write(1,"o\n",2);

}

int main()
{
	rush(6,8);
	return 0;
}
