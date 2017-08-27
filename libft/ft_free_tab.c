/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsavry <nsavry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:31:07 by nsavry            #+#    #+#             */
/*   Updated: 2016/04/12 19:29:29 by nsavry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_free_tab(char ***tab)
{
	int			i;

	i = 0;
	if (*tab)
	{
		while (*((*tab) + i))
		{
			if (*((*tab) + i))
				free(*((*tab) + i));
			i++;
		}
		free(*tab);
	}
}
