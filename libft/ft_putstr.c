/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 15:08:26 by ahorling      #+#    #+#                 */
/*   Updated: 2021/09/20 15:10:17 by ahorling      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *string)
{
	int	len;

	len = ft_strlen(string);
	if (string != NULL)
		write(1, string, len);
}