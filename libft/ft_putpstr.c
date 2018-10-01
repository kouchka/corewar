/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brocher <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 10:42:21 by brocher           #+#    #+#             */
/*   Updated: 2018/03/16 10:42:23 by brocher          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putpstr(char **arr)
{
	if (!arr)
		return ;
	while (*arr)
		ft_putendl(*arr++);
}
