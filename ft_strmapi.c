/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:44:07 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/23 18:12:06 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	size_t	strlen;
	int		i;

	if (!s || !f)
		return (NULL);
	strlen = ft_strlen(s);
	newstr = (char *) malloc(sizeof(char) * strlen + 1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int	main(void)
{
	char	str[] = "do x function to each char of this string";

	ft_strmapi(str, ft_toupper);

	return (0);
}
*/
