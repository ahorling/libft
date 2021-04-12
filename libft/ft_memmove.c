/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 11:14:29 by alexander     #+#    #+#                 */
/*   Updated: 2021/04/12 17:58:38 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	i;
	char	*output;
	char	*input;

	i = 0;
	output = (char *)dest;
	input = (char *)src;
	if (dest == src)
		return (dest);
	if (input < output)
	{
		while (i <= size)
		{
			output[i] = input[i];
			i++;
		}
		return (dest);
	}
	while (i < size)
	{
		output[i] = input[i];
		i++;
	}
	return (dest);
}
