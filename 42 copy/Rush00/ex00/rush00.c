/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcluzet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 11:40:40 by jcluzet           #+#    #+#             */
/*   Updated: 2019/08/31 15:32:24 by jcluzet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	lignemilieu(int x, int y)
{
	int largeur;

	largeur = x;
	ft_putchar('|');
	while (largeur > 2)
	{
		ft_putchar(' ');
		largeur--;
	}
	if (x > 1)
	{
		ft_putchar('|');
	}
}

void	ligne(int x, int y)
{
	int longueur;
	int largeur;

	largeur = x;
	longueur = y;
	while (longueur > 2)
	{
		write(1, "\n", 1);
		lignemilieu(x, y);
		longueur--;
	}
	if (y > 1)
	{
		write(1, "\n", 1);
		ft_putchar('o');
		while (largeur > 2)
		{
			ft_putchar('-');
			largeur--;
		}
		if (x > 1)
		{
			ft_putchar('o');
		}
	}
}

void	rush(int x, int y)
{
	int largeur;
	if (x < 0)
	{
		x = 0;
	}
	if (y < 0)
	{
		y = 0;
	}
	largeur = x;
	if (y > 0 && x > 0)
	{
		ft_putchar('o');
		while (largeur > 2)
		{
			ft_putchar('-');
			largeur--;
		}
		if (x > 1)
		{
			ft_putchar('o');
		}
		ligne(x, y);
		write(1, "\n", 1);
	}
}
