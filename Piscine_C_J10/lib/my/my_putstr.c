/*
** my_putstr.c for  in /home/henon_t/rendu/Piscine_C_J04
** 
** Made by Thomas Henon
** Login   <henon_t@epitech.net>
** 
** Started on  Thu Oct  1 09:49:52 2015 Thomas Henon
** Last update Mon Oct 12 22:37:25 2015 Thomas Henon
*/

int	my_putstr(char *str)
{
  char	*curChar;

  curChar = str;
  while (*curChar != '\0')
  {
    my_putchar(*curChar);
    curChar = curChar + 1;          ;
  }
}
