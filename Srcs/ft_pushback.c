/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:38:57 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 15:47:03 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_upordown(t_string *list)
{
	int	i;
	int	j;

	i = 0;
	while (i < list->llist_b)
		i++;
	i--;
	if (list->s_list[i] <= 0)
		list->s_list[i] = list->s_list[i] - 1;
	j = 0;
	while (list->list_b[j] != list->s_list[i])
		j++;
	if (j > (list->llist_b / 2))
	{
		while (list->list_b[0] != list->s_list[i])
			ft_rrarrbrrr(list, 1);
	}
	else
	{
		while (list->list_b[0] != list->s_list[i])
			ft_rarbrr(list, 1);
	}
}

int	ft_pushback(t_string *list)
{
	ft_upordown(list);
	while (list->llist_b > 0)
		ft_papb(list, 1);
	return (1);
}
