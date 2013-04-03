/*
** FILE for FILE in /home/moriss_h/projet
**
** Made by hugues morisset
** Login   <moriss_h@epitech.net>
**
** Started on  Mon Oct  8 09:34:29 2012 hugues morisset
** Last update Mon Oct  8 16:20:21 2012 hugues morisset
*/

#include "../include/42sh.h"

void	init_stdfd_t_def_val(t_fds *fds, int stdin, int stdout, int stderr)
{
  fds->stdin = 0;
  fds->stdout = 1;
  fds->stderr = 2;
  if (stdin != -1)
    fds->stdin = stdin;
  if (stdout != -1)
    fds->stdout = stdout;
  if (stderr != -1)
    fds->stderr = stderr;
}