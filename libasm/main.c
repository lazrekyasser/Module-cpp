#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int	_ft_strlen(const char *str);
extern char	*_ft_strcpy(char *dst, char *src);
extern int 	_ft_strcmp(char *s1, char *s2);
extern char	*_ft_strdup(char *s);
extern int	_ft_write(int fd, const char *buf, size_t len);
extern int	_ft_read(int fd, const char *buf, int len);

int main()
{
	char *s="yasser";
	char *r;
	char *r1;
	r=strdup(s);
	r1=_ft_strdup(s);
	printf("r=%s\nr1=%s\n",r,r1);
	return (0);
}
