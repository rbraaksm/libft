/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 12:48:36 by rbraaksm      #+#    #+#                 */
/*   Updated: 2019/11/01 12:10:46 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*tmp;
	unsigned char		i;

	tmp = (unsigned const char *)s;
	i = (unsigned char)c;
	while (n)
	{
		if (*tmp == i)
			return ((void *)tmp);
		tmp++;
		n--;
	}
	return (NULL);
}
