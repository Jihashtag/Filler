/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/11 00:24:19 by jbert             #+#    #+#             */
/*   Updated: 2014/05/11 23:25:12 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILL_H
# define FILL_H

#include "libft/libft.h"

typedef struct	s_st
{
	int			line;
	int			col;
	int			p;
	int			pc;
	int			pl;
}				t_st;

int				**define_tb(int	col, int l);
int				place(int **tb, int **p, t_st st, int *i);
void			answer(int **tb, t_st st, int **p);
int				**intb(int i);
int				space(int j, char *l);
int				**filltb(int **t, int col, int line, char *l);
int				init_st(t_st *st, char *line, int i);
int				initst(t_st *st, char *line, int i);
int				tb_piece(int ***tb, int ***piece, t_st *st, char *line);
int				getmap(int ***tb, t_st *st, int ***piece, char *line);

#endif
