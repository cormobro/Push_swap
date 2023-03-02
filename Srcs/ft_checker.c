/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:32:21 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/17 18:43:11 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_push_swap.h"

static int	is_digit(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
		j++;
	if (str[i] == '-')
		i++;
	while (str[i] <= 57 && str[i] >= 48)
		i++;
	if (i == j && str[i - 1] != '-')
		return (1);
	return (0);
}

static int	ft_argument_checker(char **argv, t_string *list)
{
	list->split = ft_split(argv[1], ' ');
	if (!list->split)
		return (0);
	list->tmp1 = 0;
	while (list->split[list->tmp1] != (void *)0)
	{
		if (!is_digit(list->split[list->tmp1]))
			return (0);
		list->tmp1++;
	}
	list->length = list->tmp1;
	list->llist_a = list->tmp1;
	list->list_a = malloc(sizeof(long long *) * (list->tmp1));
	list->list_b = malloc(sizeof(long long *) * (list->tmp1));
	if (!list->list_a || !list->list_b)
		return (0);
	list->tmp2 = 0;
	while (list->split[list->tmp2] != (void *)0)
	{
		list->list_a[list->tmp2]
			= (long long int)ft_atoi(list->split[list->tmp2]);
		list->tmp2++;
	}
	return (1);
}

static int	ft_arguments_parser(int argc, char **argv, t_string *list)
{
	long long	i;

	i = 1;
	while (i + 1 < argc)
		i++;
	list->llist_a = i;
	list->list_a = malloc(sizeof(long long *) * (i));
	list->list_b = malloc(sizeof(long long *) * (i));
	if (!list->list_a || !list->list_b)
		return (0);
	i = 1;
	while (i + 1 <= argc)
	{
		list->list_a[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (1);
}

int	ft_checker(int argc, char **argv, t_string *list)
{
	int	i;

	i = 1;
	list->length = argc - 1;
	if (argc > 2)
	{
		list->split = malloc(sizeof(char *) * 1);
		if (!list->split)
			return (0);
		list->split[0] = (void *)0;
		while (i < argc)
		{
			if (!is_digit(argv[i]))
				return (0);
			i++;
		}
		if (!ft_arguments_parser(argc, argv, list))
			return (0);
		return (1);
	}
	else if (argc == 2)
		return (ft_argument_checker(argv, list));
	else
		return (0);
}
