/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:07:12 by febonaer          #+#    #+#             */
/*   Updated: 2023/02/02 11:38:20 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_push_swap.h"

void	ft_switchzeros(t_string *list)
{
	int	i;

	i = 0;
	while (i < list->length)
	{
		if (list->s_list[i] <= 0)
			list->s_list[i] = list->s_list[i] - 1;
		i++;
	}
}
