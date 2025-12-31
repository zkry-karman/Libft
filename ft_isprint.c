/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:38:35 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/22 15:23:15 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (c);
	else
		return (0);
}

/*
#include "stdio.h"
int	main(void)
{
	printf("%d\n", ft_isprint('A'));
	printf("%d\n", ft_isprint('$'));
	printf("%d\n", ft_isprint('\n'));
	printf("%d\n", ft_isprint('	'));
	printf("%d\n", ft_isprint('|'));
	printf("%d\n", ft_isprint(-5));

	return 0;
}
*/
