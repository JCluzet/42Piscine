/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 12:30:41 by jcluzet           #+#    #+#             */
/*   Updated: 2019/09/14 18:03:47 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_error(void)
{
	write(1, "Error\n", 6);
}

int		switchcharint(char **nombre, int i)
{
	int o;
	int tab;
	int error;

	error = 0;
	o = 0;
	tab = 0;
	while (nombre[i][o])
	{
		if (nombre[i][o] > 47 && nombre[i][o] < 58)
		{
			tab = tab * 10 + ((nombre[i][o]) - 48);
		}
		else
			error = 1;
		o++;
	}
	return (tab);
}

int		verifnumberiscorrect(char **nombre, int i)
{
	int o;
	int *tab;

	o = 0;
	while (nombre[i][o])
	{
		if (!(nombre[i][o] > 47 && nombre[i][o] < 58))
			return (1);
		o++;
	}
	return (0);
}

int		argument(int argc, char **argv)
{
	int number;

	number = 0;
	if (argc == 3)
	{
		number = switchcharint(argv, 2);
		//NEW DICTIONNARY NEED TO BE USE IN ARGV[2] !
	}
	if (argc == 2)
	{
		number = switchcharint(argv, 1);
	}
	return (number);
}

int		main(int argc, char **argv)
{
	int number;
	int error;

	error = 0;
	if (argc == 3)
	{
		if ((verifnumberiscorrect(argv, 2)) == 0)
			number = argument(argc, argv);
		else
			error = 1;
	}
	if (argc == 2)
	{
		if ((verifnumberiscorrect(argv, 1)) == 0)
			number = argument(argc, argv);
		else
			error = 1;
	}
	if (argc > 3 || argc < 2 || error == 1)
	{
		ft_error();
		return (0);
	}
	printf("%d", number);
	return (0);
}
