/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:38:42 by febonaer          #+#    #+#             */
/*   Updated: 2023/02/02 11:54:20 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_free(t_string *list)
{
	int	i;

	i = 0;
	if (list->llist_a > 0)
		free(list->list_a);
	if (list->llist_b > 0)
		free(list->list_b);
	if (list->llist_a > 0)
		free(list->s_list);
	if (list->split[0])
	{
		while (list->split[i])
		{
			free(list->split[i]);
			i++;
		}
		free(list->split);
	}
}

static void	ft_init_list(t_string *list)
{
	list->list_a = NULL;
	list->list_b = NULL;
	list->s_list = NULL;
	list->length = 0;
	list->tmp = 0;
	list->tmp1 = 0;
	list->tmp2 = 0;
	list->llist_a = 0;
	list->llist_b = 0;
	list->llist_s = 0;
	list->split = NULL;
}

int	main(int argc, char **argv)
{
	t_string	list;

	ft_init_list(&list);
	if (argc < 2 || !ft_checker(argc, argv, &list))
		ft_print_error(&list, argc);
	if (!ft_sort(&list))
		ft_print_error(&list, argc);
	if (!ft_double(&list))
		ft_print_error(&list, argc);
	if (ft_sorted(&list))
	{
		ft_free(&list);
		return (1);
	}
	ft_switchzero(&list);
	if (!ft_dispatch(&list))
		ft_print_error(&list, argc);
	ft_free(&list);
	return (0);
}
