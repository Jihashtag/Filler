/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 13:26:46 by jbert             #+#    #+#             */
/*   Updated: 2014/04/14 13:28:02 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**nanana(char **temp, char const *s, char c, int *a)
{
	if (a[2] > 0)
	{
		temp[a[1]][a[2]] = '\0';
		a[1]++;
	}
	if ((((char *)s)[a[0]] == ';' || ((char *)s)[a[0]] == '|') && \
			((char *)s)[a[0] - 1] != (c & '\t'))
	{
		temp[a[1]] = (char *)malloc(sizeof(char) * (2));
		temp[a[1]][0] = ((char *)s)[a[0]++];
		temp[a[1]][1] = '\0';
		a[1]++;
	}
	if ((((char *)s)[a[0]] == ';' || ((char *)s)[a[0]] == '|') && \
			((char *)s)[a[0] - 1] == (c | '\t'))
	{
		temp[a[1] - 1][0] = ((char *)s)[a[0]++];
		temp[a[1] - 1][1] = '\0';
	}
	return (temp);
}

char	**ft_strsplit(char const *s, char c)
{
	int		a[3];
	char	**temp;

	a[0] = 0;
	a[1] = 0;
	if (s == NULL || s[a[0]] == '\0')
		return (NULL);
	temp = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1));
	while ((char)s[a[0]] && (char)s[a[0]] != '\n' && (char)s[a[0] + 1] != '\n')
	{
		a[2] = 0;
		while ((((char *)s)[a[0]] == c || \
					((char *)s)[a[0]] == '\t') && ((char *)s)[a[0]])
			a[0]++;
		temp[a[1]] = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1 - a[0]));
		while (((char *)s)[a[0]] != c && ((char *)s)[a[0]] != ';' &&\
		((char *)s)[a[0]] != '|' && \
		((char *)s)[a[0]] != '\t' && ((char *)s)[a[0]] != '\n')
			temp[a[1]][a[2]++] = ((char *)s)[a[0]++];
		temp = nanana(temp, s, c, a);
	}
	temp[a[1]] = NULL;
	return (temp);
}
