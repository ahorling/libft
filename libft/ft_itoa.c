/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 16:48:52 by alexander     #+#    #+#                 */
/*   Updated: 2021/04/12 17:53:55 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(int n)
{
	int	chars;

	chars = 0;
	if (n < 0)
	{
		n = n * -1;
		chars++;
	}
	while (n > 0)
	{
		n = n / 10;
		chars++;
	}
	return (chars);
}

char	*checkvalues(int n)
{
	if (n == -2147483648)
		return ("-2147483648");
	else if (n == 0)
		return ("0");
	return (0);
}

char	*ft_itoa(int n)
{
	char	*string;
	int		i;

	i = ft_length(n);
	string = (char *)malloc((i + 1) * sizeof(char));
	if (string == NULL)
		return (NULL);
	string[i] = '\0';
	i--;
	if (n == 0 || n == -2147483648)
		return (checkvalues (n));
	if (n < 0)
	{
		string[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		string[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (string);
}
