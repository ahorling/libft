/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: alexander <alexander@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:28:53 by alexander     #+#    #+#                 */
/*   Updated: 2021/04/11 20:08:28 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static int	ft_whtspce(const char *str)
{
	int	i;
	int	whtspce;

	i = 0;
	whtspce = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			whtspce++;
		else if (str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
			whtspce++;
		else
			break ;
		i++;
	}
	return (whtspce);
}

int	ft_atoi(const char *str)
{
	int	value;
	int	final;
	int	i;
	int	neg;

	i = ft_whtspce(str);
	final = 0;
	value = 0;
	neg = 1;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		value = str[i] - 48;
		final = (final * 10) + value;
		i++;
	}
	return (final * neg);
}
