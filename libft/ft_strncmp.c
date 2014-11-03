/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 20:51:20 by jbert             #+#    #+#             */
/*   Updated: 2014/01/18 19:59:50 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define RESET(a, b) a = 0; b = 0;

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	a;
	int				b;

	if (s1 == NULL)
		return (0);
	RESET(a, b);
	if (s1 == s2 && ft_strlen(s1) <= n)
		return (0);
	while (s1[a] == s2[a] && s1[a] && s2[a] && a < n)
	{
		a++;
	}
	b = s1[a] - s2[a];
	return (b);
}
