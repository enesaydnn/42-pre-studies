#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	if (to_find[0] == '\0')
		return (str);
	
		i = 0;
		while (str[i] != '\0')
		{
			j = 0;
			while (to_find[j] != '\0' && str[i + j] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (str + i);
				j++;
			}
			i++;
		}
		return (0);
	}	
	
int main()
{
    char str[] = "Merhaba dünya";
    char to_find[] = "dünya";
    printf("%s \n", ft_strstr(str, to_find));
    return (0);
}

    

