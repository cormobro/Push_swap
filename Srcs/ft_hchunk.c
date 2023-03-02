/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hchunk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:38:27 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 15:45:09 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_hchunk(t_string *list, int start, int end)
{
	int	i;

	i = end - start;
	while (i > 0)
	{
		if (!ft_scan(list, start, end))
			return (0);
		i--;
	}
	return (1);
}
