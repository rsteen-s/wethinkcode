#include <stdio.h>


// creating a function to get the lenght of an int


// size_t --> this is like an int but there are no negatives and a lot more positives


int 	ft_intlen(int n)
{
	int counter;

	counter = 0;
	while (n >= 10)		// while the value that is passed in is greater we need to devide and increment counter
	{
		n = n/10;
		counter++;
	}
	counter++;				//this is for the final single digit

	return (counter);
}

int main (void)
{
	int len;
	int i;

	i = 0;
	len = ft_intlen(123456789);
	printf("this is the len:  %d\n",len);
	return (0);
}
