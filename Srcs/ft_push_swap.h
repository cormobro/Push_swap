/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:46:35 by febonaer          #+#    #+#             */
/*   Updated: 2023/01/17 18:49:45 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	long long		*list_a;
	long long		*list_b;
	long long		*s_list;
	int				length;
	long long		tmp;
	long long		tmp1;
	long long		tmp2;
	long long		llist_a;
	long long		llist_b;
	long long		llist_s;
	char			**split;
}	t_string;

int				ft_checker(int argc, char **argv, t_string *list);
char			**ft_split(char const *s, char c);
long long int	ft_atoi(const char *str);
int				ft_strlen(const char *str);
int				ft_sort(t_string *list);
void			ft_papb(t_string *list, int p);
void			ft_sasbss(t_string *list, int s);
void			ft_rarbrr(t_string *list, int r);
void			ft_rrarrbrrr(t_string *list, int r);
int				ft_double(t_string *list);
int				ft_dispatch(t_string *list);
int				ft_handle2(t_string *list);
int				ft_handle45(t_string *list);
int				ft_scan(t_string *list, int start, int end);
int				ft_hchunk(t_string *list, int start, int end);
void			ft_checkposb(t_string *list);
int				ft_handle(t_string *list, int chunks);
int				ft_pushback(t_string *list);
int				ft_handle2(t_string *list);
int				ft_handle3(t_string *list);
void			ft_switchzero(t_string *list);
void			ft_print_error(t_string *list, int argc);
void			ft_putendl_fd(char *s, int fd);
int				ft_sorted(t_string *list);
void			ft_switchzeros(t_string *list);

#endif
