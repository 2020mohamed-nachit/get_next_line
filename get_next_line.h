/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnachit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 01:28:45 by mnachit           #+#    #+#             */
/*   Updated: 2021/12/12 02:53:00 by mnachit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *var_static, char *var);
char	*ft_substr(char *s, int start, int len);
int		ft_strlen(char *s);
char	*ft_line(char *var_static);
char	*ft_redfile(char *var_static, int fd);
int		ft_backslash(char *s);
char	*ft_strdup(const char *s1);

#endif
