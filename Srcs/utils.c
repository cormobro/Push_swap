/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:51:29 by febonaer          #+#    #+#             */
/*   Updated: 2023/02/02 11:54:06 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_print_error(t_string *list, int argc)
{
	int	i;

	if (argc >= 2)
		ft_putendl_fd("Error", 2);
	if (list->llist_a > 0)
		free(list->list_a);
	if (list->llist_b > 0)
		free(list->list_b);
	if (list->llist_s > 0)
		free(list->s_list);
	if (list->split != NULL && list->split[0])
	{
		i = 0;
		while (list->split[i])
		{
			free(list->split[i]);
			i++;
		}
		free(list->split);
	}
	exit(0);
}

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd >= 0)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}

int	ft_strlen(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_handle2(t_string *list)
{
	if (list->list_a[0] > list->list_a[1])
		ft_sasbss(list, 0);
	return (1);
}

int	ft_handle3(t_string *list)
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
