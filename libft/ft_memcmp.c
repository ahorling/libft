/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 11:09:08 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/11 20:06:03 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t size)
{
	char	*block1;
	char	*block2;
	int		comparevalue;
	size_t	i;

	block1 = (char *)str1;
	block2 = (char *)str2;
	comparevalue = 0;
	i = 0;
	if (str1 == str2)
		return (comparevalue);
	while (i <= size)
	{
		if (block1[i] != block2[i])
		{
			comparevalue = (block1[i] - block2[i]);
			return (comparevalue);
		}
		else
		{
			i++;
		}
	}
	return (comparevalue);
}
