/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:35:51 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/11 17:14:05 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_dispatch(t_string *list)
{
	if (list->length == 1)
		return (0);
	else if (list->length == 2)
		return (ft_handle2(list));
	else if (list->length == 3)
		return (ft_handle3(list));
	else if (list->length >= 4 && list->length <= 5)
		return (ft_handle45(list));
	else if (list->length >= 6 && list->length <= 30)
		return (ft_handle(list, 2));
	else if (list->length >= 31 && list->length <= 60)
		return (ft_handle(list, 3));
	else if (list->length >= 61 && list->length <= 80)
		return (ft_handle(list, 4));
	else if (list->length >= 81 && list->length <= 150)
		return (ft_handle(list, 5));
	else
		return (ft_handle(list, 10));
}
