/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 01:19:19 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/17 01:19:19 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *str, int character, size_t n)
{
	const unsigned char *s;
	unsigned char c;
	size_t	i;

	s = (const unsigned char *)str;
	c = (unsigned char)character;
	i = 0;
	while(i < n)
	{
		if(s[i] == c)
		{
			return (void *)&s[i];
		}
		i++;
	}
	return NULL;
}