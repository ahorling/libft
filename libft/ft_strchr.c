/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 16:11:28 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/11 19:54:09 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*input;

	input = (char *)str;
	while (*input != '\0')
	{
		if (*input == c)
			return (input);
		input++;
	}
	return (NULL);
}
