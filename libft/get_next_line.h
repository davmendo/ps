#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);

char	*ft_strjoine(char *s1, char *s2);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strchr(const char *s, int c);

size_t	ft_strlen(const char *str);

#endif
