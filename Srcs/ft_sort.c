/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:40:03 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/17 18:42:53 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_push_swap.h"

int	ft_sort(t_string *list)
{
	int	j;

	list->s_list = malloc(sizeof(long long *) * (list->llist_a));
	if (!list->s_list)
		return (0);
	list->llist_s = -1;
	while (list->llist_s++ < list->length - 1)
	{
		list->s_list[list->llist_s] = list->list_a[list->llist_s];
	}
	list->llist_s = 1;
	while (list->llist_s < list->length)
	{
		list->tmp1 = list->s_list[list->llist_s];
		j = list->llist_s - 1;
		while (j >= 0 && list->s_list[j] > list->tmp1)
		{
			list->s_list[j + 1] = list->s_list[j];
			j = j - 1;
		}
		list->s_list[j + 1] = list->tmp1;
		list->llist_s++;
	}
	return (1);
}
