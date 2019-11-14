/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/30 14:29:26 by rbraaksm      #+#    #+#                 */
/*   Updated: 2019/11/01 09:37:53 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) == 0)
		return (NULL);
	while (haystack[i] != '\0' && i <= len)
	{
		while (haystack[i + x] == needle[x] && (i + x) < len)
		{
			if (!needle[x + 1])
				return ((char *)&(haystack[i]));
			x++;
		}
		x = 0;
		i++;
	}
	return (NULL);
}
