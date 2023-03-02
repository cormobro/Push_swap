/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_papb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:38:20 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/18 15:11:18 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"
#include <stdio.h>

static void	ft_papb2(t_string *list, int ab)
{
	int	i;

	i = 0;
	if (ab == 1)
	{
		while ((i < list->llist_a - 1) && list->list_a[i + 1])
		{
			list->list_a[i] = list->list_a[i + 1];
			i++;
		}
	}
	else
	{
		while ((i < list->llist_b - 1) && list->list_b[i + 1])
		{
			list->list_b[i] = list->list_b[i + 1];
			i++;
		}
	}
}

static void	ft_pa(t_string *list)
{
	int	i;

	i = 0;
	list->tmp1 = list->list_b[0];
	if (list->llist_a == 0)
		list->list_a[0] = list->tmp1;
	else
	{
		while (i < list->llist_a + 1)
		{
			list->tmp2 = list->list_a[i];
			list->list_a[i] = list->tmp1;
			list->tmp1 = list->tmp2;
			i++;
		}
	}
	ft_papb2(list, 0);
	write(1, "pa\n", 3);
}

static void	ft_pb(t_string *list)
{
	int	i;

	i = 0;
	list->tmp1 = list->list_a[0];
	if (list->llist_b == 0)
		list->list_b[0] = list->tmp1;
	else
	{
		while (i < list->llist_b + 1)
		{
			list->tmp2 = list->list_b[i];
			list->list_b[i] = list->tmp1;
			list->tmp1 = list->tmp2;
			i++;
		}
	}
	ft_papb2(list, 1);
	write(1, "pb\n", 3);
}

void	ft_papb(t_string *list, int p)
{
	if (p == 1 && list->list_b[0])
	{
		ft_pa(list);
		list->llist_a++;
		list->llist_b--;
	}
	else if (p == 0 && list->list_a[0])
	{
		ft_pb(list);
		list->llist_a--;
		list->llist_b++;
	}
}
