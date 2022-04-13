/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaugra <abeaugra@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 15:09:51 by abeaugra          #+#    #+#             */
/*   Updated: 2022/03/24 14:38:58 by abeaugra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*The bzero() function writes n zeroed bytes to the string s.
 * If n is zero, bzero() does nothing.*/

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(char *)s++ = 0;
}
/*
int     main(void)
{
    char    str1[] = "";
    char    str2[] = "goodbye";
    ft_bzero(str1, 0);
    ft_bzero(str2, 1);
    printf("%s\n", str1);
    printf("%s\n",str2);
    return (0);
}*/
