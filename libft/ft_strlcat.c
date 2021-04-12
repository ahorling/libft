/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 14:07:44 by ahorling      #+#    #+#                 */
/*   Updated: 2020/12/04 11:16:04 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	int		srclen;
	int		destlen;
	int		offset;

	i = 0;
	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	offset = destlen;
	if (size == 0)
		return (srclen);
	while ((destlen + i) < size - 1)
	{
		if (src[i] != '\0')
		{
			dest[offset] = src[i];
			i++;
			offset++;
		}
		else
			break ;
	}
	dest[offset] = '\0';
	return (destlen + srclen);
}
