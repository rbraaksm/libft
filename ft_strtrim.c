/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbraaksm <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/04 10:22:33 by rbraaksm      #+#    #+#                 */
/*   Updated: 2019/11/04 10:22:36 by rbraaksm      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char			*ft_strtrim(char const *s1, char const *set)
{
	char		*newstr;
	int			i;
	int			size;
	int			lenght;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	size = ft_strlen(s1) - 1;
	while (size >= 0 && ft_strchr(set, s1[size]))
		size--;
	lenght = size - i + 1;
	newstr = ft_substr(s1, i, lenght);
	return (newstr);
}
