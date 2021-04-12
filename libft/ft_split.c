/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/12/01 11:53:46 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/11 20:07:04 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numofsplits(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count + 1);
}

static char	*pullstring(char const *s, int start, int len)
{
	int		i;
	int		j;
	char	*substr;

	i = 0;
	j = 0;
	substr = (char *)malloc((len + 1) * sizeof(char));
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
	substr[j] = '\0';
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		entry;
	char	**table;

	i = 0;
	entry = 0;
	table = (char **)malloc(numofsplits(s, c) * sizeof(char *));
	if (table == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
		{
			table[entry] = pullstring(s, j, i - j);
			entry++;
		}
	}
	table[entry] = "\0";
	return (table);
}
