#include <stdlib.h>

char    *ft_strjoin(char *s1, char *s2)
{
		int len = 0;
		int i = 0;
		char *ptr;
		ptr = s2;

		while (s1[len])
				len++;
		while (*ptr)
		{
				ptr++;
				len++;
		}
		ptr = (char *)malloc(sizeof(char) * (len + 1));
		if (!ptr)
				return (NULL);
		len = 0;
		while (s1[len])
		{
				ptr[i] = s1[len];
				len++;
				i++;
		}
		len = 0;
		while(s2[len])
		{
				ptr[i] = s2[len];
				len ++;
				i++;
		}
		ptr[i] = '\0';
		return (ptr);
}
