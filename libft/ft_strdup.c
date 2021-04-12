/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 13:27:28 by ahorling      #+#    #+#                 */
/*   Updated: 2020/12/01 14:40:58 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		leng;
	char	*dupe;

	i = 0;
	while (str[i] != '\0')
	{
		leng++;
		i++;
	}
	i = 0;
	dupe = (char *)malloc((leng + 1) * sizeof(char));
	while (str[i] != '\0')
	{
		dupe[i] = str[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
