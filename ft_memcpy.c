/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:27:44 by eabdelha          #+#    #+#             */
/*   Updated: 2021/11/07 18:56:56 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*d;
	const char		*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = dst;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dst);
}
/*int main (void)
{
	//const int s = 19;
//	int ar[s] = {1, 2, 3, 4, 5};
//	int d[s];
	
//	for (int i= 0; i<s; i++)
		printf("%s\n",ft_memcpy(0, 0,19*sizeof(int)));
	return 0;
}*/
