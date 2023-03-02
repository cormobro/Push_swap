/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:43:32 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 17:14:15 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_handle(t_string *list, int chunks)
{
	int	i;
	int	j;

	i = list->length / chunks;
	j = i;
	if (list->length % chunks != 0)
	{
		if (!ft_hchunk(list, i - j, i + (list->length % chunks)))
			return (0);
	}
	else
	{
		if (!ft_hchunk(list, i - j, i))
			return (0);
	}
	while (chunks > 1)
	{
		i = i + j;
		if (!ft_hchunk(list, i - j, i))
			return (0);
		chunks--;
	}
	if (!ft_pushback(list))
		return (0);
	return (1);
}
