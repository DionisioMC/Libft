/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:40:46 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/21 13:43:47 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dest_char;
	const char	*src_char;

	dest_char = dest;
	src_char = src;
	i = n - 1;
	if (dest < src)
	{
		dest_char = ft_memcpy(dest, src, n);
	}
	else
	{
		while (i >= 0)
		{
			dest_char[i] = src_char[i];
			i--;
		}
	}
	return (dest_char);
}
