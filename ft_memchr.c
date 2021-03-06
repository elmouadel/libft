/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:40:58 by eabdelha          #+#    #+#             */
/*   Updated: 2021/11/13 09:29:04 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*hs;

	hs = (unsigned char *)s;
	while (n-- > 0)
	{
		if (*hs == (unsigned char)c)
			return ((void *)hs);
		hs++;
	}
	return (NULL);
}
/*int main(void)
{
	int ar[9] = {1,2,3,4,5,6,7};
	char *g;
	g = ft_memchr(ar, 9, 7*sizeof(int));
	return 0;
}*/
