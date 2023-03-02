/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:40:17 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/17 18:28:33 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_sorted(t_string *list)
{
	int	i;

	i = 0;
	while (i < list->length)
	{
		if (list->list_a[i] != list->s_list[i])
			return (0);
		i++;
	}
	return (1);
}
