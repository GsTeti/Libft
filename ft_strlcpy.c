/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 23:59:25 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/16 23:59:25 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	num_src;

	num_src = ft_strlen(src);
	i = 0;
	while(src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if(size > 0)
	{
	dest[i] = '\0';
	}
	return num_src;
}