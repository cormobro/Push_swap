/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scan.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:39:48 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/18 15:06:46 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_sft(t_string *list, int start, int end)
{
	int	i;
	int	j;

	i = 0;
	while (i < list->llist_a)
	{
		j = start;
		while (j < end)
		{
			if (list->list_a[i] == list->s_list[j])
				return (i);
			else if (list->list_a[i] < 0)
			{
				if (list->list_a[i] == list->s_list[j] - 1)
					return (i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_sfb(t_string *list, int start, int end)
{
	int	i;
	int	j;

	i = list->llist_a - 1;
	while (i >= 0 && list->list_a[i])
	{
		j = start;
		while (j < end)
		{
			if (list->list_a[i] == list->s_list[j])
				return (list->llist_a - i);
			else if (list->list_a[i] < 0)
			{
				if (list->list_a[i] == list->s_list[j] - 1)
					return (list->llist_a - i);
			}
			j++;
		}
		i--;
	}
	return (0);
}

static int	ft_tothetop(t_string *list, int top)
{
	while (top > 0)
	{
		ft_rarbrr(list, 0);
		top--;
	}
	ft_checkposb(list);
	ft_papb(list, 0);
	if (list->llist_b == 2)
	{
		if (list->list_b[0] < list->list_b[1])
			ft_sasbss(list, 1);
	}
	return (1);
}

static int	ft_tothebot(t_string *list, int bot)
{
	while (bot > 0)
	{
		ft_rrarrbrrr(list, 0);
		bot--;
	}
	ft_checkposb(list);
	ft_papb(list, 0);
	if (list->llist_b == 2)
	{
		if (list->list_b[0] < list->list_b[1])
			ft_sasbss(list, 1);
	}
	return (1);
}

int	ft_scan(t_string *list, int start, int end)
{
	int	top;
	int	bot;

	top = ft_sft(list, start, end);
	bot = ft_sfb(list, start, end);
	if (top <= bot)
		return (ft_tothetop(list, top));
	else if (top > bot)
		return (ft_tothebot(list, bot));
	else
		return (0);
}
