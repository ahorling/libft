/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 14:53:14 by alexander     #+#    #+#                 */
/*   Updated: 2021/04/11 20:01:31 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t size)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && i < size)
	{
		i++;
	}
	return (str1[i] - str2[i]);
}
