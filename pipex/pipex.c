/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 14:05:37 by sukwon            #+#    #+#             */
/*   Updated: 2023/03/13 14:59:21 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//REFERENCE https://velog.io/@kyj93790/Pipex-%EC%82%AC%EC%9A%A9%EA%B0%80%EB%8A%A5-%ED%95%A8%EC%88%98-
#include "pipex.h"

int main(int argc, char *argv[], char *envp[])
//extern char **environ and int main(int argc, char *argv[], char *envp[])
{
    t_arg   *stru;
    //t_path  *temp;
    
    stru = (t_arg *)ft_calloc(1 , sizeof(t_arg));
    if (stru == NULL)
        error_exit(EXIT_STRU,"MALLOC FAIL","T_ARG");
    stru->env = envp;
    // temp = (t_path *)ft_calloc(1 , sizeof(t_path));
    // if (temp == NULL)
    //     error_exit(EXIT_STRU,"MALLOC FAIL","T_PATH");
    
   
    free(stru);
    return 0;
}

int execute(t_arg *stru)
{
    
}

    
