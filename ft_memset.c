/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gstefani <gstefani@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 22:20:41 by gstefani          #+#    #+#             */
/*   Updated: 2026/06/16 22:20:41 by gstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char *p;
	size_t	i;

	p = (unsigned char *)ptr;
	i = 0;
	while(i < num)
	{
		p[i] = value;
		i++;
	}
	return ptr;
}
