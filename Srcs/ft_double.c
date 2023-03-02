/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:37:42 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/17 17:41:25 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_double(t_string *list)
{
	int	i;

	i = 0;
	while (i < list->length)
	{
		if (list->s_list[i] < -2147483648 || list->s_list[i] > 2147483647)
			return (0);
		i++;
	}
	i = 0;
	while (i < list->length - 1)
	{
		if (list->s_list[i] == list->s_list[i + 1])
			return (0);
		i++;
	}
	list->llist_b = 0;
	return (1);
}
