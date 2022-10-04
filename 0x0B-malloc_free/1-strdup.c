#include <stdlib.h>

/**
* _strdup - Copies a string to new allocated space in memory
* @str: The string to be copied
* Return: Pointer to allocated memory containing copy of @str (SUCCESS)
* OR NULL if @str is empty (FAILURE) OR
* NULL if memory is insufficient
*/

char *_strdup(char *str)
{
	char *strDup;

	int i, j;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	i++;
	strDup = malloc(sizeof(*str) * i);
	if (strDup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}
	return (strDup);
}
