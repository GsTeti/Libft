/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 22:40:16 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/16 22:40:16 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t	i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dest;
}