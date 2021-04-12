/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 16:02:02 by ahorling      #+#    #+#                 */
/*   Updated: 2020/12/01 14:41:05 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *string, char const *set)
{
	int	endstring;

	if (string == NULL)
		return (ft_strdup(string));
	while (ft_strchr(set, *string) != NULL)
		string++;
	endstring = ft_strlen(string);
	while (ft_strchr(set, string[endstring - 1]) != NULL)
		endstring--;
	return (ft_substr(string, 0, (endstring)));
}
