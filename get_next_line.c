/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaragoz <mkaragoz@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 00:37:21 by mkaragoz          #+#    #+#             */
/*   Updated: 2022/11/10 01:57:14 by mkaragoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			endl;
	static char	*str;
	char		*tmp_str;

	endl = 1;
	if (!str)
		str = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!str || fd < 0)
		return (0);
	tmp_str = str;
	while (endl && read(fd, str, 1))
	{
		if (*(str) != '\n' && endl < BUFFER_SIZE)
			endl++;
		else
			endl = 0;
		str++;
	}
	if (*(--str) != '\n')
		*(str) = '\n';
	return (tmp_str);
}
