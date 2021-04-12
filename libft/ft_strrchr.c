/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 16:24:09 by ahorling      #+#    #+#                 */
/*   Updated: 2020/12/04 11:23:17 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*input;
	int		length;

	input = (char *)str;
	length = ft_strlen(str);
	while (length != 0)
	{
		if (input[length] == c)
			return (&input[length]);
		else
			length--;
	}
	return (NULL);
}
