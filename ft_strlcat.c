/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcoelho <dcoelho@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:42:13 by dcoelho           #+#    #+#             */
/*   Updated: 2026/04/22 12:11:51 by dcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	total_size;
	size_t	i;

	total_size = ft_strlen(dst) + ft_strlen(src);
	i = 0;
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (i < (size - ft_strlen(dst) - 1))
	{
		dst[ft_strlen(dst) + i] = src[i];
		i++;
	}
	dst[ft_strlen(dst) + i] = '\0';
	return (total_size);
}
