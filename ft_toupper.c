/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkarman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:30:15 by zkarman           #+#    #+#             */
/*   Updated: 2025/11/22 15:26:20 by zkarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	else if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	else
		return (c);
}
/*
#include "stdio.h"
int     main(void)
{
        printf("%d\n", ft_toupper('a'));
        printf("%d\n", ft_toupper('w'));
        printf("%d\n", ft_toupper('z'));
        printf("%d\n", ft_toupper('p'));
        printf("%d\n", ft_toupper('F'));
        printf("%d\n", ft_toupper('$'));
        printf("%d\n", ft_toupper(' '));
}
*/
