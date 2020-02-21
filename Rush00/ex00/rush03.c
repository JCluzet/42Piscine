/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wozsertt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:47:11 by wozsertt          #+#    #+#             */
/*   Updated: 2019/09/01 10:22:36 by wozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	pligne(int x)
{
	int i;

	i = 1;
	if (i == 1)
	{
		ft_putchar('A');
		i++;
	}
	while (i < x)
	{
		ft_putchar('B');
		i++;
	}
	if (i == x)
	{
		ft_putchar('C');
	}
	write(1, "\n", 1);
}

void	dligne(int x)
{
	int i;

	i = 1;
	if (i == 1)
	{
		ft_putchar('B');
		i++;
	}
	while (i < x)
	{
		ft_putchar(' ');
		i++;
	}
	if (i == x)
	{
		ft_putchar('B');
		write(1, "\n", 1);
	}
}

void	rush(int x, int y)
{
	int compteur;

	compteur = 1;
	if (x <= 0 || y <= 0)
	{
		x = 0;
		y = 0;
	}
	if (compteur == 1 && x != 0 && y != 0)
	{
		pligne(x);
		compteur++;
	}
	while (compteur < y)
	{
		dligne(x);
		compteur++;
	}
	if (compteur == y)
	{
		pligne(x);
	}
}
