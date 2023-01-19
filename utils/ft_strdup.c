#include "utils.h"

char	*ft_strdup(char *s1)
{
	char	*dup;
	int		i;

	i = 0;
	dup = ft_calloc(sizeof(char) * (ft_strlen(s1) + 1));
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	return (dup);
}