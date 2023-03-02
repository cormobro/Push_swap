/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle45.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:43:42 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 16:15:35 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_sendint(t_string *list, int entier)
{
	int	i;
	int	j;

	i = 0;
	while (i < list->llist_a)
	{
		if (list->list_a[i] == (long long int)entier)
			j = i;
		i++;
	}
	if (j <= list->llist_a / 2)
	{
		while (j > 0)
		{
			ft_rarbrr(list, 0);
			j--;
		}
	}
	else
	{
		while (j++ <= (list->llist_a - 1))
			ft_rrarrbrrr(list, 0);
	}
}

//else return(0) puis return (1)
static int	ft_handle3m(t_string *list)
{
	if (list->list_a[0] < list->list_a[1] && list->list_a[1] < list->list_a[2])
		return (1);
	else if (list->list_a[0] < list->list_a[2]
		&& list->list_a[0] > list->list_a[1])
		ft_sasbss(list, 0);
	else if (list->list_a[2] < list->list_a[0]
		&& list->list_a[2] > list->list_a[1])
		ft_rarbrr(list, 0);
	else if (list->list_a[0] < list->list_a[1]
		&& list->list_a[0] > list->list_a[2])
		ft_rrarrbrrr(list, 0);
	else if (list->list_a[1] < list->list_a[0]
		&& list->list_a[1] > list->list_a[2])
	{
		ft_sasbss(list, 0);
		ft_rrarrbrrr(list, 0);
	}
	else if (list->list_a[2] < list->list_a[1]
		&& list->list_a[2] > list->list_a[0])
	{
		ft_sasbss(list, 0);
		ft_rarbrr(list, 0);
	}
	return (1);
}

static int	ft_handle5(t_string *list)
{
	int	i;

	i = 0;
	ft_sendint(list, list->s_list[3]);
	ft_papb(list, 0);
	ft_sendint(list, list->s_list[4]);
	ft_papb(list, 0);
	if (!ft_handle3m(list))
		return (0);
	ft_papb(list, 1);
	ft_papb(list, 1);
	ft_rarbrr(list, 0);
	ft_rarbrr(list, 0);
	return (1);
}

static int	ft_handle4(t_string *list)
{
	ft_papb(list, 0);
	if (!ft_handle3m(list))
		return (0);
	if (list->list_b[0] == list->s_list[0]
		|| list->list_b[0] == list->s_list[1])
	{
		ft_papb(list, 1);
		if (list->list_a[0] == list->s_list[1])
			ft_sasbss(list, 0);
	}
	else if (list->list_b[0] == list->s_list[2])
	{
		ft_rarbrr(list, 0);
		ft_papb(list, 1);
		ft_sasbss(list, 0);
		ft_rrarrbrrr(list, 0);
	}
	else
	{
		ft_papb(list, 1);
		ft_rarbrr(list, 0);
	}
	return (1);
}

int	ft_handle45(t_string *list)
{
	int	i;

	i = 0;
	ft_switchzeros(list);
	if (list->length == 4)
		return (ft_handle4(list));
	else if (list->length == 5)
		return (ft_handle5(list));
	else
		return (0);
}
