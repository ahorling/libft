/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/17 12:57:59 by ahorling      #+#    #+#                 */
/*   Updated: 2021/04/11 19:58:13 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putextremes_fd(int n, int fd)
{
	if (n == 0)
		ft_putchar_fd('0', fd);
	else if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	string[10];

	i = 0;
	if (n == 0 || n == -2147483648)
	{
		ft_putextremes_fd(n, fd);
	}
	else if (n < 0)
	{
		n = n * -1;
		ft_putchar_fd('-', fd);
	}
	while (i <= 9)
	{
		while (n > 0)
		{
			string[i] = (n % 10) + '0';
			n = n / 10;
			i++;
		}
		string[i] = '\0';
		i++;
	}
	ft_putstr_fd(string, fd);
}
