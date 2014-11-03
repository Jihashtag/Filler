/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/01 21:48:41 by jbert             #+#    #+#             */
/*   Updated: 2014/04/14 13:23:33 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	a = (char *)malloc(sizeof(char) * (i + j + 1));
	i = 0;
	j = 0;
	while (s1[i])
	{
		a[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		a[i] = s2[j];
		j++;
		i++;
	}
	a[i] = '\0';
	return (a);
}
