/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:48:53 by zkarman           #+#    #+#             */
/*   Updated: 2025/12/01 12:22:48 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

static int	gmalloc(char **split, int index, size_t buffer)
{
	int	i;

	i = 0;
	split[index] = malloc(buffer);
	if (!split[index])
	{
		while (i < index)
			free (split[i++]);
		free (split);
		return (1);
	}
	return (0);
}

static int	memfill(char **split, char const *s, char c)
{
	size_t	len;
	int		i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len)
		{
			if (gmalloc(split, i, len + 1))
				return (1);
			ft_strlcpy(split[i], s - len, len + 1);
		}
		i++;
	}
	return (0);
}

static size_t	count_words(const char *str, char c)
{
	size_t	i;
	int		trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		trigger = 0;
		while (*str == c && *str)
			str++;
		while (*str != c && *str)
		{
			if (!trigger)
			{
				i++;
				trigger = 1;
			}
			str++;
		}
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**split;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	split = malloc((words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[words] = NULL;
	if (memfill(split, s, c))
		return (NULL);
	return (split);
}
/*
int	main(void)
{
	char	str[] = "split this string into several strings";
	ft_split(str, ' ');

	return (0);
}
*/
