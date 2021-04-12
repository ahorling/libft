/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: ahorling <ahorling@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/10 12:41:10 by ahorling      #+#    #+#                 */
/*   Updated: 2020/12/04 11:12:34 by alexander     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	size_t	*pointer;
	size_t	i;

	i = 0;
	pointer = malloc(nitems * size);
	while (pointer[i] <= nitems)
	{
		pointer[i] = 0;
		i++;
	}
	return (pointer);
}
