/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samirkha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 20:11:06 by samirkha          #+#    #+#             */
/*   Updated: 2022/03/19 13:09:29 by samirkha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	index;
	size_t	slen;

	index = 0;
	if (ft_strlen(s) < start)
	{
		ptr = malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	slen = ft_strlen(s + start);
	if (slen < len)
		len = slen;
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (0);
	while (index < len)
	{
		ptr[index] = s[start];
		start++;
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
