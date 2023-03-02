/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkposb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:33:43 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 16:54:35 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_while(t_string *list, int s)
{
	long long int	i;

	i = 0;
	while (i < list->tmp1)
	{
		if (s == 1)
			ft_rarbrr(list, 1);
		else if (s == 0)
			ft_rrarrbrrr(list, 1);
		i++;
	}
}

static void	ft_highup(t_string *list)
{
	if (list->tmp1 == list->llist_b / 2 && list->llist_b % 2 != 0)
		ft_while(list, 1);
	else if (list->tmp1 >= list->llist_b / 2)
	{
		list->tmp1 = list->llist_b - list->tmp1;
		ft_while(list, 0);
	}
	else
		ft_while(list, 1);
}

static void	ft_findpos(t_string *list)
{
	int	i;

	i = 0;
	while (i < list->llist_b - 1)
	{
		if (list->list_a[0] > list->list_b[i + 1]
			&& list->list_a[0] < list->list_b[i])
				list->tmp1 = i + 1;
		i++;
	}
	if (list->tmp1 == list->llist_b / 2 && list->llist_b % 2 != 0)
		ft_while(list, 1);
	else if (list->tmp1 >= list->llist_b / 2)
	{
		list->tmp1 = list->llist_b - list->tmp1;
		ft_while(list, 0);
	}
	else
		ft_while(list, 1);
}

void	ft_checkposb(t_string *list)
{
	int	i;

	i = 0;
	list->tmp1 = 0;
	list->tmp2 = list->list_b[0];
	while (i < list->llist_b)
	{
		if (list->list_b[i] > list->tmp2)
		{
			list->tmp1 = i;
			list->tmp2 = list->list_b[i];
		}
		i++;
	}
	i = 0;
	if (list->llist_b <= 1 || (list->list_a[0] < list->list_b[list->llist_b - 1]
			&& list->list_a[0] > list->list_b[0]))
		list->tmp = 0;
	else if (list->list_a[0] > list->tmp2)
		ft_highup(list);
	else
		ft_findpos(list);
}
