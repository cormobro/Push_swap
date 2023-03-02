/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrarrbrrr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:39:23 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 15:48:39 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_ru(int length, long long *llist)
{
	int				i;
	long long int	tmp1;
	long long int	tmp2;

	i = 1;
	tmp1 = llist[0];
	llist[0] = llist[length - 1];
	while (i < length)
	{
		tmp2 = llist[i];
		llist[i] = tmp1;
		tmp1 = tmp2;
		i++;
	}
}

void	ft_rrarrbrrr(t_string *list, int r)
{
	if (r == 0)
	{
		ft_ru(list->llist_a, list->list_a);
		write(1, "rra\n", 4);
	}
	else if (r == 1)
	{
		ft_ru(list->llist_b, list->list_b);
		write(1, "rrb\n", 4);
	}
	else
	{
		ft_ru(list->llist_a, list->list_a);
		ft_ru(list->llist_b, list->list_b);
		write(1, "rrr\n", 4);
	}
}
