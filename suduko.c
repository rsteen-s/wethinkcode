/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   suduko.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsteen-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 10:18:25 by rsteen-s          #+#    #+#             */
/*   Updated: 2020/01/19 13:06:44 by rsteen-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		 main (int argc, char **board)
{
	int	i;
	int	y;
	int	x;

	x = argc - 1;
	while (x <= 9)
	{
		y = 0;
		while (y <= 8)
		{
			if (board[x][y] != '.')
			{
				printf("%d", board[x][y]);
				y++;
			}


			if (board[x][y] == '.')
			{
				i = 1;
				num  = solvecell(board[x][y], i);
				board[x][y] = num;
				ft_putchar(num);
				y++;
			}
		}
		x++;
	}

	return (0);
}

int		solvecell(int	board[x][y] ,int i)
{
	while (i <= 9)
	{	
		board[x][y] = i;
		if (checkrow(board[x][y], i) == true)

			return (i);

		else if
			(checkrow(board[x][y], i) == false)
			{ 
				i++;
				solvecell(board[x][y], i)
			}


		if (checkcol(board[x][y]) == true)
			return (i);

		else
		{ 
			i++;
			solvecell(board[x][y], i);
		}	

		if (subboard(board[x][y]) == true)
			return(i);

		else
		{ 
			i++;
			solvecell(board[x][y], i)
		}	
	}
	return (i);
}

bool	checkrow(int	board[x][y], int i)
{
	int	counter;

	counter = 0;
	while (board[x][counter] != '\0')
	{
		if (board[x][counter] != i)
			return true;


		if (board[x][counter] == i)
			return false;
		counter++;
	}

}


bool		checkcol(int	board[x][y], int i)
{
	int	counter;

	counter = 0;
	while (board[counter][y] != '\0')
	{
		if (board[counter][y] != i)
			return true; 

		if (board[counter][y] == i)
			return false;
		counter++;
	}

}

bool	subboard(int board[x][y],int i)
{
	int	k;
	int l;

	if ((y >= 0) && (y <= 2))
	{
		k = 0;
	}
	else if ((y > 2) && ( y <= 5))
	{
		k = 3;
	}
	else if ((y > 5) && (y <= 8))
	{
		k = 6;
	}
	else if ((x >= 1) && (x <= 3))
	{
		l = 0;
	}
	else if (( x > 3) && (x <= 6))
	{
		l = 3;
	}
	else if ((x > 6) && (x <= 9))
	{
		l = 6;
	}
	else

		int	counterk;
	int	counterl;

	counterl = l;

	while (counterl < l+3)
	{
		counterk =k;
		while (counterk < k + 3)
		{
			if (board[counterl][counterk] == i)
				return false;

			else if (board[counterl][counterk] != i)
				return true;
			break;

			counterk++;
		}

		if (board[counterl][counterk] == i)
		{
			return false;

		}
		else if (board[counterl][counterk] != i)

			counterl++;

	}
	return true;
}

