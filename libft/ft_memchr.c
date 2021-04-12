/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 12:52:12 by alexander     #+#    #+#                 */
/*   Updated: 2021/04/11 19:55:40 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t size)
{
	char	*input;
	char	*output;

	input = (char *)str;
	output = NULL;
	while (*input != '\0' && size != 0)
	{
		if (*input != ch)
		{
			input++;
			size--;
		}
		else
		{
			output = input;
			return (output);
		}
	}
	return (output);
}
