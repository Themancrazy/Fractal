/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 16:58:12 by anjansse          #+#    #+#             */
/*   Updated: 2018/12/04 17:01:58 by anjansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strclen(char *str, char c)
{
	int x;

	x = 0;
	while (str[x] != c)
		x++;
	return (x);
}
