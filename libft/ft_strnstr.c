/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 14:28:11 by alexander     #+#    #+#                 */
/*   Updated: 2020/12/04 11:20:10 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *needle, const char *haystack, size_t length)
{
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	if (needle[j] == '\0')
	{
		return ((char *)haystack);
	}
	while (haystack[i] != '\0')
	{
		while (haystack[i] == needle[j] && i < length)
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i - j]);
		}
		j = 0;
		i++;
	}
	return (0);
}
