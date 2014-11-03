/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbert <jbert@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:53:27 by jbert             #+#    #+#             */
/*   Updated: 2013/12/01 01:36:54 by jbert            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	res;
	int	i;
	int	k;

	i = 0;
	res = 0;
	k = 0;
	while (str[i] == 32 || (str[i] <= 14 && str[i] >= 8))
		i++;
	if (str[i] == '-')
	{
		k = i;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (str[k] == '-')
		return (-res);
	else
		return (res);
}
