/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 10:41:54 by brocher           #+#    #+#             */
/*   Updated: 2018/03/16 10:41:57 by brocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnstr_fd(char *str, size_t n, int fd)
{
	size_t i;

	i = ft_strlen(str);
	if (n < i)
		i = n;
	write(fd, str, i);
}
