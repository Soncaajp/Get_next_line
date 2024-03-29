/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhulk <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:21:05 by rhulk             #+#    #+#             */
/*   Updated: 2019/05/03 14:29:05 by rhulk            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	if (new)
	{
		if (!content)
		{
			new->content = NULL;
			new->content_size = 0;
		}
		else
		{
			new->content = (void*)malloc(content_size);
			if (!new->content)
			{
				free(new);
				return (NULL);
			}
			new->content_size = content_size;
			ft_memcpy(new->content, content, content_size);
		}
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
