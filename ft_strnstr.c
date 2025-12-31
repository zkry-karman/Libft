/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:15:22 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/23 17:50:38 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == '\0')
		return ((char *)big);
	i = 0;
	while (*big && i < len)
	{
		j = 0;
		while (big[i + j]
			&& little[j] && (i + j) < len
			&& big[i + j] == little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
#include "stdio.h"
int	main(void)
{
	char	big[100] = "Find the key in this string";
	char	little[100] = "key";

	printf("%s\n", ft_strnstr(big, little, 15));

	return 0;
}
*/
