/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 14:39:54 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/11 20:02:33 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fullstr;
	int		len1;
	int		len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	fullstr = (char *)malloc(len1 + len2);
	ft_strlcat(fullstr, s1, len1 + 1);
	ft_strlcat(fullstr, s2, (len1 + len2 + 1));
	return (fullstr);
}
