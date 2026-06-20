/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 22:51:20 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/16 22:51:20 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	num_src;
	size_t	num_dest;
	size_t	i;

	num_src = ft_strlen(src);
	num_dest = ft_strlen(dest);

	if(num_dest >= size)
	{
		return size + ft_strlen(src);
	}
	i = 0;
	while(src[i] != '\0' && (num_dest + i + 1) < size)
	{
		dest[num_dest + i] = src[i];
		i++;
	}
	dest[num_dest + i] = '\0';
	return num_dest + num_src;
}