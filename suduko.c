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

int		 main (int x,char **board)
{
	int	i;

	x = x-1;
	while (x <= 9)
	{
		y = 0;
		while (y <= 8)
		{
			if (board[x][y] != '.');
			printf("%d", board[x][y]);
			board[x][y] = //// Ascii + 0

			if (board[x][y] == '.')
		
			solvecell(board[x][y]);
	y++;
 }*/
x = 1;
while (x <= 9)
{
	if (board[x][y] != '.')
	printf("%d\n", board[x][y]);


	x++;

//////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////


int		solvecell(int	board[x][y], int i)

while (i <= 9)
{
	board[x][y] = i;
	if checkrow(board[x][y], i) == true
		return (board[x][y] = i);
	else 
	i++;
   solvecell(board[x][y], i)	


	if checkcol(board[x][y]) == true
		return (board[x][y] =i);
	else 
		i++;
   solvecell(board[x][y], i)

	if subboard(board[x][y] == true
			return(board[x][y] = i);
	else 
	i++;
	solvecell(board[x][y], i)

}

return (board[x][y] = i);

//////////////////////////////////////////

bool	checkrow(int	board[x][y], int i)
{
	int	counter;
	
	counter = 0;
	while (board[x][counter] != '\0')
{
	if board[x][counter] == i;
	counter++; 

	if board[x][counter] != i;
	return true
}
return false
}

///////////////////////////////////////////

bool		checkcol(int	board[x][y], int i)
{
	int	counter;

	counter = 0;
	while (board[counter][y] != '\0')
	{
		if board[counter][y] == i;
		
		return false 

		if board[counter][y] != i;
		counter++;

	}
	return true

}

///////////////////////////////////////////////

bool	subboard(int board[x][y],int i)
{
	int	k;
	int l;

	if (y >= 0) && (y <= 2)
	   k = 0;
	 
	if (y > 2) && ( y <= 5)
		k = 3;
		
	if (y > 5) && (y <= 8)
	    k = 6;
	
	if (x >= 1) && (x <= 3) 
		l = 0;
	  
	if ( x > 3) && (x <= 6)
		l = 3;

	if (x > 6) && (x <= 9)
	    l = 6;

///// y low = k and y high (k+3)
//// x low = l and x high (l +3)

	int	counterk;
	int	counterl;

	counterk = k;
	counterl = l;

	while (counterl <= l+3)
	{
		if board[counterl][k] == i;
		return false

		if board[counterl][k] != i;
		counterl++;

		while (counterk <= k +3)
		{
			if board[counterl][counterk] == i;
			return false	   	
		
			if board[counterl][counterk] != i;
			counterk++;
		}
		return true
	}
	return true
}
