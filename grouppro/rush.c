#include <unistd.h>
#include "ft_putchar.c"

void rush(int x, int y)
{
	int x2;
	int x3;
	int x0;
	char c;
	
	x0=x;
	x0 = x0 - 2;
	c = 'o';
	ft_putchar(c);
	
	while(x0>0)
	{
		c = '-';
		ft_putchar(c);
		x0--;

	}
	c = 'o';
	ft_putchar(c);
	ft_putchar('\n');
	
	y = y - 2;
	while(y>0)
	{
		c ='|';
		ft_putchar(c);
		x2=x;
		x2=x2-2;
			while(x2>0)
			{ 
				c = ' ';	
				ft_putchar(c);;
				x2--;
			}
		
		c = '|';
		ft_putchar(c);
		ft_putchar('\n');
		y--;
	}
	c = 'o';
	ft_putchar(c);
	x3=x;
	x3=x3-2;
	while(x3>0)
	{
		c = '-';
		ft_putchar(c);
		x3--;
	}
	c = 'o';
	ft_putchar(c);
	ft_putchar('\n');

}

