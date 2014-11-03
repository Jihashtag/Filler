/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/11 23:21:13 by jbert             #+#    #+#             */
/*   Updated: 2014/05/11 23:22:53 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fill.h"
#include "libft/get_next_line.h"

int		**define_tb(int	col, int l)
{
	int		**t;
	int		i;

	i = 0;
	t = (int **)malloc(sizeof(int *) * col);
	while (i < col)
	{
		t[i] = (int *)malloc(sizeof(int) * l);
		i++;
	}
	return (t);
}

int		place(int **tb, int **p, t_st st, int *i)
{
	int	k;
	int	l;
	int	f;

	k = 0;
	f = 0;
	while (k < st.pc)
	{
		l = 0;
		while (l < st.pl)
		{
			if (tb[i[0] + k][i[1] + l] != st.p && tb[i[0] + k][i[1] + l] != 0)
				return (0);
			if (p[k][l] == 3 && tb[i[0] + k][i[1] + l] == st.p && f == 1)
				return (0);
			if (p[k][l] == 3 && tb[i[0] + k][i[1] + l] == st.p)
				f = 1;
			l++;
		}
		k++;
	}
	if (f == 1)
		return (1);
	return (0);
}

void	answer(int **tb, t_st st, int **p)
{
	int	i[2];

	i[0] = 0;
	while (i[0] <= (st.col - st.pc))
	{
		i[1] = 0;
		while (i[1] <= (st.line - st.pl))
		{
			if (place(tb, p, st, i))
			{
				ft_putnbr(i[0]);
				ft_putchar(' ');
				ft_putnbr(i[1]);
				ft_putchar('\n');
				return ;
			}
			i[1]++;
		}
		i[0]++;
	}
	ft_putendl_fd("No possibilities", 2);
	exit(-1);
}

int		**intb(int i)
{
	int	**tmp;

	tmp = (int **)malloc(sizeof(int *) * 1);
	tmp[0] = (int *)malloc(sizeof(int) * 1);
	tmp[0][0] = i;
	return (tmp);
}

