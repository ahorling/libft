/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 14:06:05 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/11 19:49:48 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	i = 0;
	j = 0;
	substr = (char *)malloc(len * sizeof(char));
	if (substr == NULL)
		return (NULL);
	while (i < start)
		i++;
	while (s[i] != '\0' && j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	return (substr);
}
