/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relkabou <relkabou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:37:12 by relkabou          #+#    #+#             */
/*   Updated: 2023/02/01 06:35:30 by relkabou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXECUTION_H
# define EXECUTION_H

# include "minishell.h"

void	shell_loop(void);
void	execute(t_cmd *head);
int		exec_single_cmd(t_cmd *head, t_cmd *cmd);
void	command_not_found(void);
int		is_updated(char *name, char *value, int option);
void	add_env(t_envs **envs, char *name, char *value);
void	pop_env(char *name);
char	*ft_getenv(char *name);
char	*get_env_value(char *name);
t_envs	*envs_init(void);
void	ft_setenv(char *name, char *value);

char	**dynamic_env(void);
char	*here_doc_name(void);
char	*ft_getpath(char *cmd);
void    update_env(char *name, char *value);


#endif // EXECUTION_H
