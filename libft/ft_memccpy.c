/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/04/12 19:24:51 by alexander     #+#    #+#                 */
/*   Updated: 2021/04/12 19:33:27 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
{
	size_t	i;
	char	*output;
	char	*input;

	i = 0;
	output = (char *)dest;
	input = (char *)src;
	while (i < size)
	{
		if (input[i] == c)
			return (dest[i+1]);
		output[i] = input[i];
		i++;
	}
	return (dest);
}