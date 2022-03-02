/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2022/10/01 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//kinda same as ft_strchr? searching until the nth element of s) (checked)
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;
	unsigned char	c2;

	s2 = (unsigned char *)s;
	c2 = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*s2 == c2)
		{
			return (s2);
		}
		s2++;
		i++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "abcdefg";
   const char ch = 'c';
   char *ret;

   ret = memchr(str, ch, strlen(str));

   printf("String after %c is %s\n", ch, ret);

   return(0);
}
*/
