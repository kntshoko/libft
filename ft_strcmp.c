int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}
int ft_strcmp(char *str1, char *str2)
{
    int cont;

    cont = ft_strlen(str2) - ft_strlen(str1);
    return (cont);
}
