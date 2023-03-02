/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:50:59 by febonaer          #+#    #+#             */
/*   Updated: 2023/02/02 11:54:00 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	wordscounter(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 1;
	while (s[i] == c)
		i++;
	if (s[i] && s[i] != c)
		counter ++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			counter++;
		i++;
	}
	return (counter);
}

static char	*filler(char const *s, int i, int j)
{
	int		len;
	char	*word;
	int		k;

	len = i - j + 1;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	k = 0;
	while (k < len)
	{
		word[k] = s[j];
		k++;
		j++;
	}
	word[k] = '\0';
	return (word);
}

static char	**split_free(char **tab, int k)
{
	while (k)
	{
		free(tab[k]);
		k--;
	}
	free(tab);
	return (NULL);
}

static char	**cutter(char const *s, char c, char **res)
{
	int	i;
	int	j;
	int	k;
	int	l;

	l = ft_strlen(s);
	i = 0;
	k = 0;
	while (s[i] == c)
		i++;
	while (s[i] && i < l)
	{
		j = i;
		while (s[i] != c && s[i])
			i++;
		if (j != i)
		{
			res[k] = filler(s, i - 1, j);
			if (!res[k])
				return (split_free(res, k - 1));
			k++;
		}
		i++;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s || !*s)
	{
		res = malloc(sizeof(char *) * 1);
		res[0] = NULL;
		return (res);
	}
	res = (char **)malloc(wordscounter(s, c) * sizeof(char *));
	if (!res)
		return (NULL);
	if (wordscounter(s, c) > 1)
	{
		res = cutter(s, c, res);
		res[wordscounter(s, c) - 1] = NULL;
	}
	else
		res[0] = NULL;
	if (!res)
		return (NULL);
	return (res);
}
