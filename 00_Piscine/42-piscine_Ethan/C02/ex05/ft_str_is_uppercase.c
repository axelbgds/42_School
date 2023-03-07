/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elorenze <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:04:41 by elorenze          #+#    #+#             */
/*   Updated: 2022/01/29 16:06:33 by elorenze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (str[0] >= 'A' && str[0] <= 'Z')
	{
		str++;
	}
	return (str[0] == 0);
}