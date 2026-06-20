/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 00:50:35 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/17 00:50:35 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	const unsigned char *s;
	size_t	i;

	s = (const unsigned char *)src;
	d = (unsigned char *)dest;

	if(!dest && !src)
		return (dest);

	i = 0;
	if(d < s)
	{
		while(i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if(d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	return dest;
}