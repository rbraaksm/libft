/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/01 09:06:13 by rbraaksm      #+#    #+#                 */
/*   Updated: 2019/11/13 16:59:45 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	y;

	index = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (dst[index] != '\0' && index < dstsize)
		index++;
	y = index;
	while (src[index - y] != '\0' && index < dstsize - 1)
	{
		dst[index] = src[index - y];
		index++;
	}
	if (y < dstsize)
		dst[index] = '\0';
	return (y + ft_strlen(src));
}
