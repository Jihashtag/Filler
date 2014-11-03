/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/10 16:53:56 by jbert             #+#    #+#             */
/*   Updated: 2014/05/11 23:27:31 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fill.h"
#include "libft/get_next_line.h"

int		space(int j, char *l)
{
	if (ft_isdigit(l[j]))
	{
		while (l[j] && l[j] != ' ')
			j++;
	}
	return (j);
}

int		**filltb(int **t, int col, int line, char *l)
{
	static int	i = 0;
	int			j;
	int			k;

	j = 0;
	k = 0;
	if (!l)
		return (intb(i));
	j = space(j, l);
	while (l[j] && k < line)
	{
		if (l[j] == '.')
			t[i][k++] = 0;
		else if (l[j] == 'O' || l[j] == 'o')
			t[i][k++] = 1;
		else if (l[j] == 'X' || l[j] == 'x')
			t[i][k++] = 2;
		else if (l[j] == '*')
			t[i][k++] = 3;
		j++;
	}
	i++;
	if (i >= col)
		i = 0;
	return (t);
}

int		init_st(t_st *st, char *line, int i)
{
	while (line[i] && line[i] != 'p')
		i++;
	if (line[i] && line[i + 1] && line[i + 1] == '1')
		st->p = 1;
	else if (line[i] && line[i + 1] && line[i + 1] == '2')
		st->p = 2;
	else
		exit(-1);
	i = 1;
	return (i);
}

int		initst(t_st *st, char *line, int i)
{
	while (line[i] && line[i] != ' ')
		i++;
	st->col = ft_atoi(&line[++i]);
	while (line[i] && line[i] != ' ')
		i++;
	st->line = ft_atoi(&line[++i]);
	i = 2;
	return (i);
}

int		tb_piece(int ***tb, int ***piece, t_st *st, char *line)
{
	int	i;

	i = 3;
	if (ft_isdigit(line[0]))
		*tb = filltb(*tb, st->col, st->line, line);
	else
	{
		filltb(*tb, 0, 0, line);
		while (line[i] && line[i] != ' ')
			i++;
		st->pc = ft_atoi(&line[++i]);
		while (line[i] && line[i] != ' ')
			i++;
		st->pl = ft_atoi(&line[++i]);
		*piece = define_tb(st->pc, st->pl);
		i = 4;
	}
	(void)piece;
	return (i);
}
