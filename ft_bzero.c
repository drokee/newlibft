/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amahdiou <amahdiou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 12:16:08 by amahdiou          #+#    #+#             */
/*   Updated: 2022/10/05 12:16:14 by amahdiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *b, size_t len )
{
	char	*i;

	i = b;
	while (len)
	{
		*i = '\0';
		i++;
		len--;
	}
}
