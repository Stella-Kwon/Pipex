/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sukwon <sukwon@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:20:42 by sukwon            #+#    #+#             */
/*   Updated: 2023/03/13 15:33:47 by sukwon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int excution(int argc, char **argv, t_arg *stru)
{
    pid_t pid;

    if (pipe_create(stru) == EXIT_PIPE)
        error_exit(EXIT_PIPE, "ERROR with piping", strerror(errno));
    stru->i = 0;
    while(stru->i < stru->count_cmd - 1)
    {
        pid = fork();
        if(pid < 0)
            exit_error(EXIT_FAILURE,"fork failure", strerror(errno));
    
        if(pid == 0)
        {
            if(argv[1])
            {
                
            }
            if(argv[argc - 1])
            {
                int infile;
                
                infile = infile(argc, argv);
                if(infile = EXIT)
            }
            while( i < stru->count_cmd) 
            execve(stru->cmd[i], stru->cmd[i], env)
        }
        else
        {
        
        }
    }

}

int excution(t_arg *stru, char **argv, int argc)
{
    pid_t pid;

    stru->i = 0;
    while(stru->i < stru->count_cmd - 1)
    {
        pid = fork();
        if(pid < 0)
        exit_error(EXIT_FAILURE,"fork failure", strerror(errno));
    
        if(pid == 0)
        {
            while( i < stru->count_cmd) 
            execve(stru->cmd[i], stru->cmd[i], env)
        }
        else
        {
        
        }
    }

}
int child_stdout(int pid, int oldfd, int newfile)
{
    if(pid == 0)
    {
        if(argv)
        dup2(oldfd,newfile);
        close(fd);
        close(fd);
        execve("argv[2]","argv[1]","argv")

    }
    /**/
    return 0;
}

int infile(int argc, char **argv)
{
    int infile;
    int infile2;
    
    infile = open(argv[1], O_RDONLY|O_TRUNC|O_CREAT, 0777);
    if(infile < 0)
        exit_error(EXIT_FAILURE,"infile open fail",NULL);
    infile2 = dup2(infile,STDIN_FILENO);
    if(infile2 < 0)
        exit_error(EXIT_FAILURE,"infile dup2 fail",strerror(errno));
    close(infile);
    return 0;
}

int outfile(int argc, char **argv)
{
    int outfile;
    int outfile2;
    
    outfile = open(argv[argc -1], O_WRONLY|O_TRUNC|O_CREAT, 0777);
    if(outfile < 0)
        exit_error(EXIT_FAILURE,"outfile open fail",NULL);
    outfile2 = dup2(outfile,STDOUT_FILENO);
    if(outfile2 < 0)
        exit_error(EXIT_FAILURE,"outfile dup2 fail",strerror(errno));
    close(outfile);
    return 0;
}