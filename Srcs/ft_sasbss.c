/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sasbss.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:39:40 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 15:49:08 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sasbss(t_string *list, int s)
{
	int	tmp;

	if (s == 0 || s == 2)
	{
		tmp = list->list_a[0];
		list->list_a[0] = list->list_a[1];
		list->list_a[1] = tmp;
		if (s == 0)
			write(1, "sa\n", 3);
	}
	if (s == 1 || s == 2)
	{
		tmp = list->list_b[0];
		list->list_b[0] = list->list_b[1];
		list->list_b[1] = tmp;
		if (s == 1)
			write(1, "sb\n", 3);
		else
			write(1, "ss\n", 3);
	}
}
