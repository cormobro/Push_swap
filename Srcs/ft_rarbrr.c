/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rarbrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:39:06 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 15:47:48 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_ru(int length, long long *llist)
{
	int			i;
	long long	tmp1;
	long long	tmp2;

	i = length - 1;
	tmp1 = llist[length - 1];
	llist[length - 1] = llist[0];
	while (i > 0)
	{
		tmp2 = llist[i - 1];
		llist[i - 1] = tmp1;
		tmp1 = tmp2;
		i--;
	}
}

void	ft_rarbrr(t_string *list, int r)
{
	if (r == 0)
	{
		ft_ru(list->llist_a, list->list_a);
		write(1, "ra\n", 3);
	}
	else if (r == 1)
	{
		ft_ru(list->llist_b, list->list_b);
		write(1, "rb\n", 3);
	}
	else
	{
		ft_ru(list->llist_a, list->list_a);
		ft_ru(list->llist_b, list->list_b);
		write(1, "rr\n", 3);
	}
}
