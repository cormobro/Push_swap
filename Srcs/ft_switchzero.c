/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_switchzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:51:08 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 15:51:21 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_switchzero(t_string *list)
{
	int	i;

	i = 0;
	while (i < list->length)
	{
		if (list->list_a[i] <= 0)
			list->list_a[i] = list->list_a[i] - 1;
		i++;
	}
}
