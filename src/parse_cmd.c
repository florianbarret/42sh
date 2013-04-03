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

void	parse_user_cmd(t_sh *shell, char *line)
{
  t_pipe	*grp;

  grp = create_n_process_group(shell, my_strdup(line));
  exec_process_group(shell, grp);

  ///TMP
  free_process_group(grp);
}