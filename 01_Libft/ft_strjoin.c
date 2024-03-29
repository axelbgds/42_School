/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abeaugra <abeaugra@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:34:37 by abeaugra          #+#    #+#             */
/*   Updated: 2022/03/30 12:24:11 by abeaugra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Alloue (avec malloc(3)) et retourne une nouvelle
*	chaîne, résultat de la concaténation de s1 et s2.*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1size;
	size_t	s2size;
	char	*ret;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	s1size = ft_strlen(s1);
	s2size = ft_strlen(s2);
	ret = malloc(s1size + s2size + 1);
	if (ret == NULL)
		return (NULL);
	ft_memcpy(ret, s1, s1size);
	ft_memcpy(ret + s1size, s2, s2size);
	ret[s1size + s2size] = 0;
	return (ret);
}
