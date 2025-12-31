/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:34:50 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/22 15:26:38 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 97 && c <= 122)
		return (c);
	else if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	else
		return (c);
}
/*
#include "stdio.h"
int	main(void)
{
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_tolower('W'));
	printf("%d\n", ft_tolower('Z'));
	printf("%d\n", ft_tolower('P'));
	printf("%d\n", ft_tolower('f'));
	printf("%d\n", ft_tolower('$'));
	printf("%d\n", ft_tolower(' '));
}
*/
