/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/11 23:23:06 by jbert             #+#    #+#             */
/*   Updated: 2014/05/11 23:27:29 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "fill.h"
#include "libft/get_next_line.h"

int		getmap(int ***tb, t_st *st, int ***piece, char *line)
{
	static int	i = 0;

	if (i == 0)
		i = init_st(st, line, i);
	else if (i == 1)
		i = initst(st, line, i);
	else if (i == 2)
	{
		*tb = define_tb(st->col, st->line);
		i++;
	}
	else if (i == 3)
		i = tb_piece(tb, piece, st, line);
	else if (i == 4)
	{
		*piece = filltb(*piece, st->pc, st->pl, line);
		if (filltb(NULL, 0, 0, NULL)[0][0] >= (st->pc) || \
				filltb(NULL, 0, 0, NULL)[0][0] == 0)
		{
			filltb(*tb, 0, 0, line);
			i = 1;
			return (5);
		}
	}
	return (0);
}

int		main(void)
{
	char		*line;
	int			**piece;
	int			**tb;
	t_st		st;

	while (1)
	{
		while (get_next_line(0, &line))
		{
			if (getmap(&tb, &st, &piece, line))
				break ;
		}
		answer(tb, st, piece);
	}
	return (0);
}
