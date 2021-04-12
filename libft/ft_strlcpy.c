/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 12:31:50 by ahorling      #+#    #+#                 */
/*   Updated: 2020/12/04 11:23:26 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (i < size - 1)
	{
		if (*src != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		else
			break ;
	}
	dest[i] = '\0';
	return (srclen);
}
